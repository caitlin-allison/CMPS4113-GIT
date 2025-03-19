# CMPS4113-GIT
This is the main branch, it acts as your **source of truth** for any changes you make. A good rule of thumb is to create a branch from main, so to preserve the version control history.

## Create a Branch
This can be done with the simple set of commands put into your terminal below.
`
git checkout main (or master depends on what your default branch is called)
git pull origin main
git checkout -b <your_branch_name>
`

## Merge a branch
If you wish to merge any existing branches onto main directly ensure that the branch you want to merge into main has resolved any conflicts on their end. 
`
>git checkout main
>git pull origin main
>git merge <branch_name>
>git commit -m "Your commit message"
>git push
`
**Never** address any merge conflicts using `git push --force` this can overwrite any existing history if you did not properly address it in the conflicts. It is better to create a new branch from main and merge the branch onto the new branch instead to deal with it. 