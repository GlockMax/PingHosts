import os

host_list = []

with open("host_list.txt", "r") as file_with_hosts:
    host_list = file_with_hosts.readlines()

for i in host_list:
    os.system(f"start cmd /k ping -t {i}")

