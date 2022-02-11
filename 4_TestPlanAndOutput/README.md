# Test plan and output
# HIGH LEVEL TEST PLAN
|Test ID|Description|Input Values|Expected output|Actual Output|
|:-----:|:---------:|:----------:|:-------------:|:-----------:|
|01|voter Registration Status|223232323232|1|found|
|02|voter Registration Status|000000000000|0|found|
|03|voter Registration Status|000000000001|1|found|
|04|voter Registration Status|524642642542|1|not found|

|Test ID|Description|Input Values|Expected output|Actual Output|
|:-----:|:---------:|:----------:|:-------------:|:-----------:|
|01|voter login Status|0(ID)|2|found|
|02|voter login Status|1(ID)|2|found|
|03|voter login Status|2(ID)|2|found|
|04|voter login Status|3(ID)|2|found|
|05|voter login Status|4(ID)|2|found|

|Test ID|Description|Input Values|Expected output|Actual Output|
|:-----:|:---------:|:----------:|:-------------:|:-----------:|
|01|candidate|{1,1}(ID,choose)|2|found|
|02|symbol|{3,3}(ID,choose)|0|found|

# Low LEVEL TEST PLAN
|Test ID|Description|Input Values|Expected output|Actual Output|
|:-----:|:---------:|:----------:|:-------------:|:-----------:|
|01|voter Registration Status|1234(voter id)|0|registered|
|02|voter Registration Status|2345(voter id)|1|registered|
|03|voter Registration Status|3456(voter id)|0|registered|
|04|voter Registration Status|4567(voter id)|1|registered|


|Test ID|Description|Input Values|Expected output|Actual Output|
|:-----:|:---------:|:----------:|:-------------:|:-----------:|
|01|voter login Status|0(ID)|1|voted|
|02|voter login Status|0(ID)|2|not voted|
|03|voter login Status|2(ID)|3|voted|
|04|voter login Status|2(ID)|2|voted|
|05|voter login Status|4(ID)|3|voted|


|Test ID|Description|Input Values|Expected output|Actual Output|
|:-----:|:---------:|:----------:|:-------------:|:-----------:|
|01|candidate|{1,3}(ID,choose)|200 voted|
|02|symbol|{2,3}(ID,choose)|1|100 voted|

# Best Practices
* Presented in tabular form for easy understanding 
* Both High level and low level Test plans are shown
