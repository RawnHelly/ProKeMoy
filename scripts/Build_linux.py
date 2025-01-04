import subprocess
import os
import sys
from pathlib import Path

project_path = Path.cwd()  
build_dir = os.path.join(project_path, 'build')

# 确保构建目录存在
if not os.path.exists(build_dir):
    os.makedirs(build_dir)

os.chdir(build_dir)

try:
    subprocess.run(['cmake', project_path], check=True)

    subprocess.run(['make'], check=True)
    print("Build Success")

except subprocess.CalledProcessError as e:
    print(f"Build Faile: {e}")
    sys.exit(1)