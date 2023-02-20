/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:22:56 by tfedoren          #+#    #+#             */
/*   Updated: 2023/01/23 15:33:13 by tfedoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "fstream"

std::string get_content(std::ifstream& file)
{
    std::string str;
    std::string buf;
    
    while(file.good())
    {
        std::getline(file, buf);
        str += buf += "\n";
    }    
    return str;
}

std::string replacing(std::string &str, const std::string& replace, const std::string& with)
{
   
    int j;
    int flag = 0;
    std::string return_string; 

    for(int i = 0; i < (int)str.length(); i++)
    {
        if(str.compare(i, replace.length(), replace) == 0 && flag == 0)
        {
            std::string temp;
            for(j = 0; j < i; j++)
                temp.push_back(str[j]);
            temp.append(with);
            for(j+=replace.length(); j < (int)str.length(); j++)
                temp.push_back(str[j]);
            str = temp;
        }
    }
    return str;
}

int main (int argc, char *argv[])
{
    try
    {
        if (argc != 4)
            throw 1;
        std::string file_name = argv[1];
        std::string replace = argv[2];
        std::string with = argv[3];
        if (file_name.empty() || replace.empty() || with.empty())
            throw 2;
        std::ifstream in_file(file_name);
        if(!in_file.is_open())
            throw 3;
        std::string contents = get_content(in_file);
        contents = replacing(contents, replace, with);
        file_name += ".replace";
        std::ofstream outfile(file_name);
        outfile << contents;
    }
    catch(int i)
    {
        std::cerr << "ERROR_CODE: " << i << std::endl;
    }
    
}
