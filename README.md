# n8n Workflows

This is a repository to share how I use n8n. I've included a `docker-compose.yml` file and `data`. If you plan to use this n8n configuration, be sure to edit the compose file and follow instructions. I also use a cloudflare tunnel to make the subdomain available, so the networking may need to change based on your network/hosting setup.

# Workflow Examples
In `workflows`, you will see example workflows I've created. The images below show some of them. If you want to use or edit these workflows, just copy and paste the JSON data right into a n8n workflow!

## Upload Sermons to PCO
If using the [Planning Center n8n Node](https://github.com/ZoneMix/n8n-nodes-planning-center), be sure to install the [community node](https://www.npmjs.com/package/n8n-nodes-planning-center?activeTab=readme)!

<img width="671" height="475" alt="image" src="https://github.com/user-attachments/assets/11bb4746-df42-4616-a515-22bb3b4db996" />

<img width="1774" height="261" alt="image" src="https://github.com/user-attachments/assets/4bfb5697-03eb-40f1-b79c-880e3416af72" />

<img width="1688" height="977" alt="image" src="https://github.com/user-attachments/assets/12539869-1a2c-42b8-b95f-2a67acc7bb5f" />

## Delete All PCO Sermon Episodes
In case you mess up the sermon uploads, there is another workflow for the Series too!

<img width="1582" height="715" alt="image" src="https://github.com/user-attachments/assets/b0763eee-fbd4-4d72-a80d-c6041bcb2daa" />

## Upload Sermon Audio to S3
<img width="1824" height="543" alt="image" src="https://github.com/user-attachments/assets/cf9b5482-a8c0-4051-9b53-df0095bb601d" />

## Upload Sermon/Live Stream Video/Audio to SharePoint
<img width="1849" height="999" alt="image" src="https://github.com/user-attachments/assets/4ce0202f-583f-4d47-b721-b68414e648eb" />
