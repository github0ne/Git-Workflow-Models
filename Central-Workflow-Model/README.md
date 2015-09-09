# CentralWorkflowModel

This is an exercise for learning how to use git in a centralized workflow.

##What is the Centralized Workflow model?
Basically, it involves first, creating a central repo. Then having several developers cloning that central repo and making commits *locally.* After each developer finishes making their local changes they push their local master branch to the central repository. If there are any conflicts with their master branch and the remote, then they will have to handle the merge conflicts.

More information can be found [here](https://www.atlassian.com/git/tutorials/comparing-workflows/centralized-workflow).

##Exercise
* Create three users: github0ne, github2wo and github3ree
* Initialize repository for master
* Have three people clone the repo.
* Have two people work on master, locally
* Have one person push local master branch to central repo.
* Have next person try to push theirs. Make this fail.
* Make this person deal with the merge conflicts.
* Then have this person push their local master successfully.


## What this will teach you?
* The basic workflow of using git in a large group.
* How to deal with merge conflicts
* Getting git set up and working
