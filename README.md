# Hacktoberfest-2022
Hacktoberfest 2022 Challenge: Leetcode problem solutions

```markdown
This Project will have the solutions of all Leetcode Problems in any language.
```

**This is a beginner-friendly project to help you get started with your
[hacktoberfest](https://hacktoberfest.digitalocean.com/). If you don't know where to start, feel free to watch the videos linked below, and read the contribution rules. Happy hacking!!**

P.S. Star ⭐ and Share this repository, if you had fun!!

# 📌 Videos 📽️:

- [How to pull request [Overview]](https://youtu.be/DIj2q02gvKs)
- [Merge Conflict / comment](https://youtu.be/zOx5PJTY8CI)


# Contribution Rules📚:
- Name of the file should be the problem name on Leetcode.
- Put the solution file in the correct difficulty folder.
- Do NOT remove other content.
- Try to keep pull requests small to minimize merge conflicts
- Add the leetcode problem link in the PR.
- Comment the PR link in the issue for which the PR has been raised.


## Getting Started:

- Fork this repo (button on top)
- Clone on your local machine

```terminal
git clone https://github.com/Dhroov7/Hacktoberfest-2022
```
- Navigate to project directory.
```terminal
cd Hacktoberfest-2022
```

- Create a new Branch

```markdown
git checkout -b my-new-branch
```
- Stage the changes
```markdown
git add .
```
- Commit your changes.

```markdown
git commit -m "Relevant message"
```
- Then push 
```markdown
git push origin my-new-branch
```


- Create a new pull request from your forked repository

<br>

## Avoid Conflicts {Syncing your fork}

An easy way to avoid conflicts is to add an 'upstream' for your git repo, as other PR's may be merged while you're working on your branch/fork.   

```terminal
git remote add upstream https://github.com/Dhroov7/Hacktoberfest-2022
```

You can verify that the new remote has been added by typing
```terminal
git remote -v
```

To pull any new changes from your parent repo simply run
```terminal
git merge upstream/master
```

This will give you any eventual conflicts and allow you to easily solve them in your repo. It's a good idea to use it frequently in between your own commits to make sure that your repo is up to date with its parent.

For more information on syncing forks [read this article from Github](https://help.github.com/articles/syncing-a-fork/).
