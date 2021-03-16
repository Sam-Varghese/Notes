<div style='text-align:center'><span style='font-family:Georgia;color:gold;font-size:3em'>Git/Github Notes</div></span>

****

<p align='center'>
<img src='https://github.githubassets.com/images/modules/logos_page/Octocat.png'>
</p>

****

<div style='text-align:center'>

[Official Documentation](https://git-scm.com/doc)

</div>

****
<br>

* Git is a distributed version control system.

* Created by ***Linus Torvald***.

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Checking Version</span>

<br>

****

<br>

***git --version***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Putting Our Information</span>

<br>

****

<br>

***git config --global <span>user.name</span> 'Sam Varghese'*** 

***git config --global <span>user.email</span> 'sam.varghese.sica@gmail.com'***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Accessing Help</span>

<br>

****

<br>

***git help \<verb>***
<br>
***git \<verb> help***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Initialising Git </span>

<br>

****
<br>

After downloading git , in order to initialise git to track out the activities going on in our folder ,use the following command:-

<br>

***git init***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Cloning An Existing Project</span>

<br>

****

<br>

To clone any project from another repository , you need to know its URL and use following command-

<br>

***git clone URL***

****

<br>

<span style='color:yellow;font-size:1.5em'>Stopping Git From Tracking File</span>

<br>

****

<br>

***rm -rf .git***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Accessing Status Of Git Repository</span>

<br>

****

<br>

This shows all files in our working directory

<br>

***git status***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Preventing Git From Tracking Specific Files</span>

<br>

****

<br>

Firstly make a gitignore file in this way:-

<br>

***touch .gitignore***

<br>

Now ,open this gitignore file and write down the names of all files that you want Git to ignore. If you want Git to ignore all files with any extension like .pyc ,then write <br><br>
***<span>\*.pyc</span>***

<br>

****

<br>

<div style='text-align:center'><span style='color:yellow;font-size:1.5em'>Git Flow Chart</span></div>

<br>

****

<br>

<p align='center'>
<img src='https://miro.medium.com/max/738/1*lWS_YsYDgGNzwleoSK8jOg.png'>
</p>

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Adding Files To Staging Area</span>

<br>

****

<br>

The main use of staging area is to do careful and selective commits.

<br>

* <span style='color:gold;font-size:1em'>To add all files to staging area:-</span>

<br>

***git add -A***

<br>

* <span style='color:gold;font-size:1em'>To add selective files to staging area:-</span>

<br>

***git add [File Name]***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Removing Files From Staging Area</span>

<br>

****

<br>

* <span style='color:gold;font-size:1em'>Removing all files from staging area:-</span>

<br>

***git reset***

<br>

* <span style='color:gold;font-size:1em'>Removing selective files from staging area:-</span>

<br>

***git reset [File Name]***

<br>

****

<BR>

<span style='color:yellow;font-size:1.5em'>Undoing Changes Made To A File</span>

<br>

****

<br>

Now , if we mistakenly changed content of a file , and before commiting our work , we wanna undo that , then just type the following command:

<br>

***git checkout FILE_NAME***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Committing Our Work</span>

<br>

****

<br>

Now ,because I have selected VS Code gor Git ,hence putting the command:-

<br>

***git commit***

<br>

Will automatically open VS Code in order to name the commit that has been done by me. Name the commit and close VS Code in order to confirm the commit.

<br>

****

<br>

But alternatively we can also mention name of commit in same command by this way:-

<br>

***git commit -m "[Name of our commit]"***

<br>

By this method VS Code wont get opened.

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Accessing Information Of All Commits</span>

<br>

****

<br>

***git log***<br>
***git log -3*** #To see the last 3 commits

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Analysing Diffrence In Code Of Previous Commit And Present Code</span>

<br>

****

<br>

***git diff***

<br>

****


<br>

<span style='color:yellow;font-size:1.5em'>Modifying Message Of Previous Commit</span>

<br>

****

<br>

***git commit --amend -m "[New Name Of Previous Commit]"***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Getting Names Of All Files Of Repository</span>

<br>

****

<br>

In order to get names of all files of our repository ,enter the following command:

<br>

***ls***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Getting Information About Exact Changes Made In Any File</span>

<br>

****

<br>

To view the exact changes that we have made in any file , use the following command:

<br>

***git diff FILENAME***

<br>

****

<br>
<span style='color:yellow;font-size:1.5em'>Knowing Changes Of Each Commit</span>
<br>

****
<br>
If you wanna know that changes that are stored in a specific version of commit , then firstly do git log and know the id number of that commi and write following command in your terminal.

<br>
<br>

***git show IDNO***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Knowing The Name Of Present Working Branch</span>

<br>

****

<br>

In order to know the name of preent working branch ,enter the following command:

<br>

***git branch***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Create New Branch</span>

<br>

****

<br>

If you want to make a new branch (New branch gets all files of working branch) ,then use the following command:

<br>

***git checkout -b NAME_OF_BRANCH*** #Would shift us to this new branch

***git add NAME_OF_BRANCH*** #This command just creates a new branch ,but keeps us in the old branch only.

<br>

****

<p align='center'>
<img src='https://wac-cdn.atlassian.com/dam/jcr:86eba9ec-9391-45ea-800a-948cec1f2ed7/Branch-2.png?cdnVersion=1495'>
</p>

****

<br>

<span style='color:yellow;font-size:1.5em'>Shifting To Another Branch</span>

<br>

****

<br>

In order to shift to another branch , use the following command:

<br>

***git checkout BRANCH_NAME***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Deleting A Branch</span>

<br>

****

<br>
In order to delete a particular branch ,firstly you need to change your working branch to that branch then delete it ,here is its command:<br>
<br>

***git checkout BRANCH*** 

***git branch -d BRANCH***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Merging Diffrent Branches</span>

<br>

****

<br>
In order to merge diffrent branches of git you should be in the main branch and then specify name of branch which you wanna get merged with main branch, use the following command:(This can also be used to update brach with the content of master branch)<br>
<br>

***git merge BRANCH_NAME***

****
<p align='center'>
<img src='https://wac-cdn.atlassian.com/dam/jcr:83323200-3c57-4c29-9b7e-e67e98745427/Branch-1.png?cdnVersion=1495'>
</p>

****

<br>

<span style='color:yellow;font-size:1.5em'>Delete Last n Commit</span>

<br>

****

<br>

To delete the last n commits that you mistakenly made ,use the following command:

<br>

***git reset --hard HEAD^^***   <br><br>#If you wanna delete the first 2 commits ,therefore only 2 arrows.

<br>

***git reset --hard ID_OF_COMMIT***<br><br>

#This is to undo specific git commit.

****
<br>
<span style='color:yellow;font-size:1.5em'>Jumping Back To Previous Version</span>
<br>
<br>

****
<br>
Now ,if I wanna jump to any previous version of my code , at the same time ,automatically deleting the rest commit version that came after the version I wanna jum onto:

<br>
<br>

***git reset --hard COMMIT_ID***


<br>

****

<p align='center'>
<img src='https://www.git-tower.com/learn/git/faq/undo-last-commit/02-reset-concept.png'>
</p>

****

<br>

<span style='color:yellow;font-size:1.5em'>Delete Last n Commit After Reverting Code Back To Last Commit</span>

<br>

****

<br>

If now I want to delete the last n commits ,after undoing my code to the last commit , then use the following code:

<br>

***git reset --soft COMMIT_ID***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Restore Files That Got Mistakenly Deleted</span>

<br>

****

<br>

Suppose if I mistakenly deleted files which were being tracked by git , use the following command:

<br>

***git restore .***
<br>

#Restores all files of working directory.

<br>


****

<br>

<span style='color:yellow;font-size:1.5em'>Uploading Local Files to Github</span>

<br>

****

<br>

Firstly copy the URL of the repository ,and then use the following command:

<br>

***git remote add origin Repo_URL***<br>
***git push -u origin master***<br>
***git push***

****
<br>
<span style='color:yellow;font-size:1.5em'>Pulling All Files From Github Repository</span>
<br>

****

Just type following code in order to copy the contents of master branch to our local repository:

<br>

***git pull origin master***

#This would try to merge the files that are in both github and git .

<br>

****

<br>

<div style='text-align:center'><span style='color:gold;font-size:2em'>Practical</span>

<br>

****

<br>

Now from now on , would we start our real efforts to contributing to open source
</div>
<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Forking</span>

<br>

****

<br>

Now , supose if I visited any repo , and liked the project and wanna contribute to it , then firstly fork it up.

<br>

****

<p align='center'>
<img src='https://hisham.hm/img/posts/github-fork.png'>
</p>

****

<br>

<span style='color:yellow;font-size:1.5em'>Copy Code URL</span>

<br>

****
<br>
Now as our next step towards contributing to that project , we would require that *source code* to get copied in our local pc , so for this , firstly get the URL of the code by clicking on the following button

<br>
<br>

****

<p align='center'>
<img src='https://docs.github.com/assets/images/help/repository/remotes-url.png'>
</p>

****

<br>

<span style='color:yellow;font-size:1.5em'>Cloning Project</span>

<br>

****

<br>

Now that we have the code URL , put the cloning comman in git bash which has been openend in master branch itself.

<br>

****

<p align='center'>
<img src='https://www.virtualizationhowto.com/wp-content/uploads/2017/08/Use-Git-Clone-command-to-clone-remote-repository.png'>
</p>

****

<br>

<span style='color:yellow;font-size:1.5em'>Creating Separate Branch</span>

<br >

****

<br>

Now that the *source code* has been cloned to our directory , we would prefer to create a separate branch for doing our changes as the current branch where you would be is master which has all the final commits (do git log) , so create a new branch:

<br>

***git checkout -b branch_name***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Updating Repo</span>

<br>

****

<br>

Now that we have cloned the project , created separate branch , we can do our necessary changes.
<br>
Now after doing necessary changes , before commiting , ensure that our loval repo is up to date with the original one by the following way:

<br>

***git checkout master***<br>
***git pull***<br>
***git checkout branch_name***<br><br>
***git pull***<br>
if sometimes this doesnt work then:<br>
***git branch --set-upstream-to=origin/master branch_name***(copy from the error message itself)

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Commiting Our Work</span>

<br>

****

<br>
Now that our local repo is all up to date , commit as follows:
<br>
<br>

***git add .***<br>
***git commit***

<br>

****

<br>

<span style='color:yellow;font-size:1.5em'>Pushing And Further Procedures</span>


<br>

****

<br>

Now that commiting our work has also been done , push the code up to your repo as follows:

<br>

***git push***<br>

Now , get onto your repo and click compare and pull request

<br>

****

<p align='center'>
<img src='https://hisham.hm/img/posts/github-comparepr.png'>
</p>

Click on this , put all messages , and its all done.

****

<p align='center'>
<img src='https://sep.yimg.com/ay/yhst-141270656365957/hello-world-chick-3.gif'>
</p>

****
****


