# Feature Branch Workflow Model

This is an exercise for learning how to use git in a feature branch workflow.

##What is the Feature Branch Workflow model?
It is only a slight modification of the central workflow model. The only change is that when creating a new feature, developers create their own branches to work on, dedicated to that feature. This branch will be seperate for the central code base. As they make modifications they push that branch, so that all can see the progress on that branch.
Then, when they finish work with the branch, they will try to integrate. This will often involve making a pull request. This amounts to having someone check if they can merge into the master branch. Then they merge, and deal with any conflicts as appropriate.

More information can be found [here](https://www.atlassian.com/git/tutorials/comparing-workflows/feature-branch-workflow).

##Exercise
* Create three users: github0ne, github2wo and github3ree
* Initialize repository for master
* Have three people clone the repo.
* Have two people create branches for two different features.
* Have both push their branches.
* Have both make a pull request.
* Accept one, but reject the other.
* Merge the first. Have the second make any requisite changes. This merge will force the second deal with a merge conflict.
* Then make the changes. Make another pull request. 
* Accept the pull request.
* Merge the branch with master. Deal with any merge conflicts.


## What this will teach you?
* The basic workflow of using git in a large group.
* How to deal with merge conflicts
* How to create a feature branch and modify that feature branch.
* Getting git set up and working (it will hammer that point)
* How to make pull requests, and deal with code review.
