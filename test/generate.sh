# 在test目录下运行

# 测试查询账单功能
../src/build/bin/ServerScript testScript/t1.svr data.csv 111 <testInput/input1.txt >testOutput/output1.txt

# 测试查询账单功能
../src/build/bin/ServerScript testScript/t1.svr data.csv 222 <testInput/input1.txt >testOutput/output2.txt

# 测试投诉功能
../src/build/bin/ServerScript testScript/t1.svr data.csv 333 <testInput/input2.txt >testOutput/output3.txt

# 测试查找用户失败
../src/build/bin/ServerScript testScript/t1.svr data.csv 123 <testInput/input1.txt >testOutput/output4.txt

# 测试帮助文档
../src/build/bin/ServerScript <testInput/input1.txt >testOutput/output5.txt

# 测试变量声明和Speak函数
../src/build/bin/ServerScript testScript/t2.svr data.csv 123 >testOutput/output6.txt

# 测试Listen函数
../src/build/bin/ServerScript testScript/t3.svr data.csv 123 <testInput/input3.txt >testOutput/output7.txt

# 测试 if...else
../src/build/bin/ServerScript testScript/t4.svr data.csv 123 <testInput/input4.txt >testOutput/output8.txt

# 测试函数调用
../src/build/bin/ServerScript testScript/t5.svr data.csv 123 >testOutput/output9.txt

# 开始测试
cd build/bin
./test >../../result.txt

echo "test finished!"






