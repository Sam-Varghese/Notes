# Git Notes

<hr>

![Logo](https://git-scm.com/images/logos/downloads/Git-Icon-1788C.png)

<hr>

# Git Clone

<hr>

```none
git clone <Repo URL>
```

<hr>

# Git Branch

<hr>

## Creating New Branch

<hr>

```none
git branch <branch name>
```

<hr>

## Pushing Branch To Repo

<hr>

```none
git push -u origin <branch name>
```

<hr>

## Remote Add Origin

<hr>

- Suppose if we create a new folder, and we wanna link it to a repo already there on github, then we do as follows:

<hr>

```git
git init
git add .
git commit -m "Message"
git remote add origin URL
```

<hr>

## Viewing Branches

<hr>

```none
git branch
```

<hr>

OR

<hr>

```none
git branch --list
```

<hr>

## Deleting A Branch

<hr>

```none
git branch -d <branch name>
```

<hr>

## Branch Switching

<hr>

- In order to move from one branch to the other, we use `git checkout`.

<hr>

```none
git checkout <name of branch>
<!-- Just press tab for auto completion -->
```

<hr>

## Creating And Switching At Same Time

<hr>

```none
git checkout -b <name of brach>
```

<hr>

## Comparing Branch To Master

<hr>

- If we wanna compare the changes added to a branch as compared to the master branch, then do:

<hr>

```git
git diff branch_name
```

<hr>

## Merging

<hr>

- Generally, in order to merge a change, just push bracch to github using following code:

<hr>

`git push -u origin branch_name`

<hr>

- And now, just create a PR, and accept it.
- Or alternatively use `git merge branch_name`

<hr>

# Status

<hr>

```none
git status
```

<hr>

# Git Add

<hr>

- Used in order to select what has to be commited the next time we do commit.

<hr>

```none
git add <file>
```

<hr>

## Adding Everything

<hr>

```none
git add -A
```

<hr>

```none
git add .
```

<hr>

# Git Commit

<hr>

- To push our changes to the remote repository, we use `git commit`.

<hr>

```none
git commit
```

<hr>

- But this method opens up our text editor, and then asks for commit message.

<hr>

- But suppose if we directly wanna give a commit message with `git commit` command, we use:

<hr>

```none
git commit -m "commit message" -m "commit description"
```

<hr>

# Git Push

<hr>

```none
git push origin <branch name>
```

<hr>

- However if your branch is newly createdm then you can also upload the brach with other changes by using:-

<hr>

```none
git push --set -upstream origin <branch name>
```

Or

```none
git push -u origin <branch name>
```

<hr>

# Git Pull

<hr>

```none
git pull origin
```

<hr>

# Reverting changes

<hr>

- The Git revert command will undo the given commit, but will create a new commit without deleting the older one

<hr>

```none
git revert <CODE/URL>
```

<hr>

# Undoing A Previous Commit

<hr>

```none
git reset --hard <commidId> && git clean -f
```

<hr>

## Undoing git add

<hr>

- If we wanna undo git add command, simply use `git reset`, or alternatively `git reset file_name` in order to remove a single file from the staging area.

<hr>

## Undoing Last Commit

<hr>

- If we wanna undo our previous commit, and reach back to our second last commit, then do `git reset HEAD~1`, where `~1` specifies that we wanna get HEAD to 1 commit before previous commit.
- If we get back to a particular commit, the just copy its ID, and use `git reset ID`, so we reach the point where the mentioned commit was done.
- So using above command, we would still see the changes we did recently, but those changes arent even added.
- If we wanna completely have all files pointing to a certain commit, that means no trace of work after that, then we do `git reset --hard ID`.

<hr>

# Stashing

<hr>

- Stashing is used whenever we need to save the changes and go back to different versions of code, butt at the same time not to add those changes.

<hr>

`git stash save "Message"`

<hr>

