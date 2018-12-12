#! /usr/bin/env python3
# -*- coding:utf-8 -*-

"""
    Project: VJCore
    Version: 20181212
    Compatible: CodeMaster
    Author: John Zhang
"""

import os
import sys
import getopt
import requests
import random
from bs4 import BeautifulSoup
from config import judgerConfig

ojs = []


def traverse(f):
    global ojs
    fs = os.listdir(f)
    for f1 in fs:
        tmp_path = os.path.join(f, f1)
        if os.path.isdir(tmp_path):
            print("- " + f1)
            ojs.append(f1)


def main(argv):
    global ojs
    print("----- available online judeges -----")
    print()
    traverse("oj/")
    print()
    print("------------------------------------")
    print()
    OJ = input("OJ: ")
    if not OJ in ojs:
        print("\nfailed")
        return
    Prob = input("Problem: ")
    print()
    try:
        username = random.choice(list(judgerConfig[OJ]))
        ret = os.system("python OJ/" + OJ + "/" + OJ + ".py "+username+" "+Prob+" "+Prob+".cpp ")
    except:
        ret = -1
    if ret == 0:
        print("complete")
    else:
        print("failed")


if __name__ == '__main__':
    main(sys.argv[1:])
