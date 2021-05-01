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

## Viewing Branches

<hr>

```none
git branch
```

OR

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
```

<hr>

## Creating And Switching At Same Time

<hr>

```none
git checkout -b <name of brach>
```

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

- But suppose if we directly wanna give a commit message with `git commit` command,  we use:

<hr>

```none
git commit -m "commit message"
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

# Undoing A Previous Commit

<hr>

```none
git reset --hard <commidId> && git clean -f
```

<hr>

