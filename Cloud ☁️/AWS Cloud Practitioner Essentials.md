<h1 align="Center">AWS Cloud Essentials</h1>

<hr>

<img src="AWS_logo.jpg" />

<hr>

These are the notes I am making for [AWS Cloud Practitioner](https://www.coursera.org/learn/aws-cloud-practitioner-essentials) course.

<hr>

# Cloud Computing

<hr>

- The on demand delivery of IT resources with pay as you go pricing.

<hr>

<h1>Client Server Model</h1>

<hr>

- A very nice concept wherein there is a client which makes a request to the servers in order to provide the required information/ access ...
- A server can be services like **Amazon Elastic Compute Cloud** (_Amazon EC2_), a type of virtual server.

<hr>

<h1>Deployment Models For Cloud Computing</h1>

<hr>

- There are three clod computing deployment models namely

<hr>

- <h2>Cloud Based Development</h2>

<hr>

- Run all parts of application in the cloud.
- Migrate existing applications to the cloud.
- Design and build new applications in the cloud.

<hr>

- ## On Premises Deployment

<hr>

- Also known as **Private Cloud Deployment**.
- Deploy resources on premises by using virtualization and resource management tools.

<hr>

- ## Hybrid Deployment

<hr>

- Combination of on premise deployment and cloud based deployment.
- Here we connect cloud based resources to in premise infrastructure.

<hr>

<h1>Benefits Of Cloud Computing</h1>

<hr>

- ## Increase Speed And Agility

<hr>

- Easy development and deployment.
- Low latency

<hr>

# Amazon Elastic Compute Cloud (Amazon EC2)

<hr>

- Amazon Elastic Compute Cloud(Amazon EC2) provides secure, resizable compute capacity in the cloud as Amazon EC2 instances.

<hr>

## Advantages

<hr>

- You can provision and launch an Amazon EC2 instance within minutes.
- You can stop using it when you have finished running a workload.
- You pay only for the compute time you use when an instance is running, not when it is stopped or terminated.
- You can save costs by paying only for the server capacity that you need or want.

<hr>

# How Amazon EC2 Works

<hr>

- ## Launch

<hr>

- So firstly, launch an instance.
- Here you select operating system, application server, or applications.
- You specify security settings to control the network of traffic that can flow into and out of your instance.

<hr>

- ## Connect

<hr>

- Next, we simply connect our programs and applications to the instance.

<hr>

# Amazon EC2 Instance Types

<hr>

- In order to cater different requirements of users, Amazon EC2 has several types of instances, namely:

<hr>

- ## General Purpose Instance

<hr>

- A balance of compute, memory, and networking resources.
- Can be used for
- Application servers
- Gaming Servers
- Backend services for enterprise applications
- Small and medium databases

<hr>

- ## Memory Optimized

<hr>

- For application dealing with large datasets in memory.
- Memory is a temporary storage area.

<hr>

- ## Compute Optimized

<hr>

- Used wherein there is a requirements of high performance processors.

<hr>

- ## Accelerated Computing

<hr>

- Use of hardware accelerators, coprocessors is prevalent here in order to perform functions more efficiently than is possible

<hr>

- ## Storage Optimized

<hr>

- Used wherein there is a requirement of high local storage.

<hr>

# Amazon EC2 Pricing

<hr>

- With Amazon EC2, you pay only for the compute time that you use.
- It offers a variety of pricing options for different use cases.

<hr>

- ## On-Demand

<hr>

- Ideal for short term, irregular workloads that cannot be interrupted.

<hr>

- ## Amazon EC2 Saving Plans

<hr>

- This plan enables us to reduce the computer costs by committing to a consistent amount of compute usage for a 1-year or 3-year term.
- Results in savings of up to 72% over On-Demand costs.

<hr>

- ## Reserved Instances

<hr>

- These are billing discount applied to the use of On-Demand instances in your account.
- You can purchase Standard Reserved and Convertible Reserved Instances.

<hr>

- ## Spot Instances

<hr>

- Ideal for workloads with flexible start and end times, or that can withstand interruptions.

<hr>

- ## Dedicated Hosts

<hr>

- Dedicated hosts are the physical servers with Amazon EC2 instance that is fully dedicated to your use.

<hr>

# Scaling Amazon EC2

<hr>

- Amazon EC2 Auto Scaling scales the number of EC2 instances automatically according to the demands of the customers.
- This auto scaling is done in two types:

<hr>

- _Dynamic Scaling_: Responds to changing demands.
- _Predictive Scaling_: Automatically schedules the right number of Amazon instances based on predicted demand.

<hr>

<img src="./img1.png">

<hr>

- ## Minimum Capacity:

<hr>

- When we create an auto-scaling group, then we also set the minimum number of Amazon EC2 instances.
- Minimum capacity is the number of Amazon EC2 instances that launch immediately after you have created Auto Scaling group.

<hr>

- ## Desired Capacity

<hr>

- General number of instances which we prefer to have for out application.
- Note: If we don't specify the desired number of Amazon EC2 instances, then the minimum number itself becomes the desired number.

<hr>

# Elastic Load Balancer

<hr>

- Elastic load balancing is the AWS service that automatically distributed incoming application traffic across multiple resources, such as Amazon EC2 instances.
- Elastic Load Balancing and AMazon EC2 Scaling are separate services, but still they work together.

<hr>

# Tightly Coupled Architecture

<hr>

- This is a type of architecture wherein if a single component fails at any point of time, then all the component starts to malfunction.

<hr>

# Loosely Coupled Architecture

<hr>

- This is a type of architecture, wherein failure of a single component does not leads to the malfunctioning of rest of the components.
- All the component still continues to function correctly.

<hr>

# Monolithic Applications

<hr>

- Suppose if we have a tightly coupled architecture, then it might also include databases, servers, and the user interface, etc. This type of architecture is known as _Monolithic Application_.

<hr>

# Microservices

<hr>

- Loosely coupled applications are simply said to be microservies.
- Two services facilitate application integration:
- **Amazon SNS**: Amazon Simple Notification Service
- **Amazon SQS**: Amazon Simple Queue Service

<hr>

# Amazon Simple Notification Service (Amazon SNS)

<hr>

- Amazon SNS is a publish/ subscribe service.
- Using Amazon SNS, a publisher publishes message to subscribers.
- This is similar to the coffee shop, the cashier provides coffee orders to the barista who makes the drinks.
- In Amazon SNS, subscribers can be web servers, email addresses, AWS Lambda functions, or several other options.

<hr>

# Amazon Simple Queue Service (Amazon SQS)

<hr>

- Suppose if a server is already working on some request, then the whole system would fail if AWS keeps on sending more and more request to that server, as those request would get lost, and our application is thus gonna break.
- So, as a solution, we have something called SQS (Simple Queue Service), which enables us to send, store and receive messages between software components, without losing messages or requiring other services to be available.

<hr>

![alt](img2.png)

<hr>

# Serverless Computing

<hr>

- There is a slight problem in using Amazon EC2 for running application, they are:

<hr>

- Provision instances (Virtual Servers)
- Upload your code
- Continue to manage the instances while your application is running.

<hr>

- So to tackle all these issues, came the serverless computing.

<hr>

![alt](img3.png)

<hr>

- So, in serverless computing, we only focus on application instead of also maintaining the servers.
- In AWS service for serverless computing is **AWS Lambda**

<hr>

# AWS Lambda

<hr>

- AWS Lambda is a service that lets you run code without needing to provision or manage servers.

<hr>

![alt](img4.png)

<hr>

# Containers

<hr>

- Containers provide you with a standard way to package your application's code and dependencies into a single object.

<hr>

![alt](img5.png)

<hr>

- But container management becomes a problem when we have tons of hosts each having hundreds of containers.

<hr>

# Amazon Elastic Container Service (Amazon ECS)

<hr>

- Amazon ECS is a highly scalable, high performance container management system that enables you to run and scale containerized application on AWS.

<hr>

# Selecting A Region

<hr>

- If AWS were to be located on a single region only, then due to unexpected failure of that data center, application from all over the world might stop working.
- Hence in order to avoid this

<hr>

- ## Proximity To Customers

<hr>

- Selecting regions that are closer to customer leads to the faster delivery of data and resources.

<hr>

- ## Available Services Within The Region

<hr>

- Sometimes the closes region might not have all the features that you want to offer to customers.

<hr>

- ## Pricing

<hr>

- Pricing is different in different countries.
- So we could also select region keeping the price on mind.

<hr>

# Availability Zones (AZ's)

<hr>

![alt](img6.png)

<hr>

- An Availability Zone is a single or a group of data centers within a region.
- AZ's are located tens of miles apart from each other.
- But this is also close enough to provide low latency.
- This arrangement has been made in order to avoid damage to multiple AZ's

<hr>

- So that's why it is recommended to run our EC2 instances on different AZ's in order to avoid application failure in case of any disaster in a particular AZ.

<hr>

# Edge Locations

<hr>

![alt](img7.png)

<hr>

# Amazon CloudFront

<hr>

- Amazon CloudFront is a fast content delivery network (CDN) service that securely delivers data, videos, applications, and APIs to customers globally with low latency, high transfer speeds, all within a developer-friendly environment.

<hr>

- An **edge location** is a site that Amazon CloudFront uses to store cached copies of your content closer to your customers for faster delivery.

<hr>

# Ways To Interact With AWS Service

<hr>

- ## AWS Management Console

<hr>

- The AWS Management Console is a web based interface for accessing and managing AWS service.
- We also have AWS Console mobile application to perform tasks such as monitoring resources, viewing alarms, and accessing billing information.

<hr>

- ## AWS Command Line Interface

<hr>

- To save time when making an API request, you can use the **AWS CLI** too
- It enables us to control multiple AWS services from CL within one tool.

<hr>

- ## Software Development Kits (SDK's)

<hr>

- It makes it easier for us to use AWS services through an API designed for your programming language or platform.

<hr>

# AWS Elastic Beanstalk and AWS CloudFormation

<hr>

- ## AWS Elastic Beanstalk

<hr>

- With AWS Elastic Beanstalk, you provide code and configuration settings, and Elastic Beanstalk deploys the resources necessary to perform the following tasks:

<hr>

- Adjust capacity
- Load balancing
- Automatic scaling
- Application health monitoring

<hr>

- ## AWS CloudFormation

<hr>

- With AWS CloudFormation, you can treat your infrastructure as code.
- This means that you can build an environment by writing lines of code instead of using the AWS Management Console to individually provision resources.
- AWS CloudFormation provisions your resources in a safe, repeatable manner, enabling you to frequently build your infra and applications without having to perform manual actions or writing custom scripts.

<hr>

# Connectivity To AWS

<hr>

- ## Amazon Virtual Private Cloud (Amazon VPC)

<hr>

![alt](img8.png)

<hr>

- Without any restrictions/ boundaries to our network connectivity, we would have data from all over the world flowing in between unrestricted.
- A networking service that you can use to establish boundaries around your AWS resource is **Amazon Virtual Private Cloud**.
- Thus, we also get the provision to work on Amazon cloud in an isolated region, and to launch resources in a virtual network we define.
- Similar to having a bodyguard while data flows through the internet.

<hr>

- ## Subnet

<hr>

- A subnet is a section of a VPC that can contain resources such as Amazon EC2 instances.

<hr>

- ## Internet Gateway

<hr>

- To allow public traffic from the internet to access your VPC, you attach an internet gateway to VPC.

<hr>

- ## Virtual Private Gateway

<hr>

![alt](img9.png)

<hr>

- A virtual private gateway enables you to establish a Virtual Private Network (VPN) connection between your VPC and a private network, such as an on-premise data center or internal corporate network.
- A Virtual private gateway allows traffic into the VPC only if it is coming from an approved network.

<hr>

# AWS Direct Connect

<hr>

![alt](img10.png)

<hr>

- AWS Direct Connect is a service that enables you to establish a dedicated private connection between your data center and a VPC.
- The private connection that AWS Direct Connect provides helps you to reduce network costs and increase the amount of bandwidth that can travel through your network.

<hr>

# Subnets And Network Access Control Lists

<hr>

![alt](img11.png)

<hr>

- Before any packet (Info from internet) arrive a Subnet, it firstly gets checked by Network Access Control List (Network CLI), which checks the packets and sees whether it has the permission to enter/ leave or not.
- A packet which has come in won't be let out if it does not have the proper leaving permissions.

<hr>

- But even this layer of security isn't enough because the EC2 instances that are present inside a subnet might also wanna have a system to let only certain types of requests come in.

<hr>

# Security Group

<hr>

![alt](img12.png)

<hr>

- So the first thing this security layer does is to BLOCK ALL INCOMING REQUEST
- Yeah, you heard it right, it by defaults lets no request enter the EC2 instance.
- So, here we need to explicitly mention the type of request that can make their way into this security layer.
- All the data/ packets that made their way into this layer are free to leave Security group without any checks.

<hr>

# Difference Between Security Group And Network ACL

<hr>

- ## Security Group

<hr>

- Stateful (Remembers whom to allow)

<hr>

- ## Network ACL

<hr>

- Stateless (Doesn't remember anything 😡)

<hr>

![alt](img13.png)
![alt](img14.png)

<hr>

# IP Address

<hr>

- A unique address that identifies a device on the internet.

<hr>

# Domain Name System (DNS)

<hr>

![alt](img15.png)

<hr>

- We are able to access any website by its link only because of DNS.
- When a user puts a particular web address in order to access it, then a request is sent to a DNS server.
- The DNS server asks the web server for the IP address that corresponds to AnyCompany's website.
- The web server asks responds by providing the IP address for AnyCompany's website, 192.0.2.0 in this case.

<hr>

# Amazon Route 53

<hr>

- Amazon Route 53 is a DNS web service.
- Gives developers and businesses a reliable way to route end users to internet applications hosted in AWS.
- Connects user requests to infrastructure running in AWS. (Such as Amazon EC2 instances and load balancers)
- It can route users to infrastructure outside of AWS too.
- We can register new domain names directly in Route 53.
- We can even transfer DNS records for existing domain names managed by other domain registrars.

<hr>

![alt](img16.png)

<hr>

# Instance Stores And Amazon Elastic Block Store (Amazon EBS)

<hr>

- ## Instance Stores

<hr>

- Block level storage volumes that behave lke physical hard drives.
- An instance store provides temporary block level storage for Amazon EC2 instance.
- An instance store is a disk storage that is physically attached to the host computer for an EC2 instance, and therefore has the same lifespan as the instance.
- Because if we ever stop this EC2 instance, and start another one, then because it would be a new EC2 instance, hence we might loose all all our data that was stored in the drive of previous EC2 instance.

<hr>

![alt](img17.png)
![alt](img18.png)
![alt](img19.png)

<hr>

- To overcome this, here comes Amazon Elastic Block Storage

<hr>

# Amazon Elastic Block Storage

<hr>

- Amazon EBS is a service that provides block level storage volumes that you can use with Amazon EC2 instances.
- So now even if you terminate an Amazon EC2 instance, all the data attached to EBS volume remains available.
- In order to enhance persistence od this data, we can take regular backups by creating Amazon EBS snapshots.

<hr>

![alt](img20.png)

<hr>

# Amazon EBS Snapshots

<hr>

- An EBS snapshot is an incremental backup.
- This means that the first backup taken of a volume copies all the data.
- For subsequent backups, only the blocks of data that have changed since the most recent snapshot are saved.

<hr>

# Amazon Simple Storage Service (Amazon S3)

<hr>

- ## Object Storage

<hr>

- In object storage, each object consists of data, metadata, and a key.
- Data might be an image, video, text document, or any other type of file.
- Metadata contains information about what the data is, how it is used, the object size and so on.
- And, an object's key is its unique identifier.

<hr>

# Amazon Simple Storage Service (Amazon S3)

<hr>

- Amazon Simple Storage Service (Amazon S3) is a service that provides object-level storage.
- So, stores data as objects in buckets.
- We can store any type of data like images, videos, text files, and so on.
- Offers unlimited storage space.
- The maximum file size for an object in Amazon S3 is 5 TB.
- When we upload a file to Amazon S3, we can set permissions to control visibility and access to it.
- We can also use the amazon S3 versioning feature to track changes to your objects over time.

<hr>

# Amazon S3 Storage Classes

<hr>

- Amazon S3 offers a range of storage classes designed for different use cases.
- Here are the two factors we should consider before selecting an S3 storage class:
- How often you plan to retrieve your data
- How available you need your data to be

<hr>

- ## S3 Standard

<hr>

- Designed for frequently accessed data.
- Stores data in a a minimum of 3 Availability Zones.
- Costs higher than other storage classes

<hr>

- ## S3 Standard-Infrequent Access (S3 Standard-IA)

<hr>

- Ideal for infrequently accessed data.
- Similar to S3 Standard but has lower storage price and higher retrieval price.

<hr>

- ## S3 One Zone-Infrequent Access (S3 One Zone-IA)

<hr>

- Stores data in a single availability zone
- Has a lower storage price than Standard-IA

<hr>

- ## S3 Intelligent-Tiering

<hr>

- Ideal for data with unknown or changing access patterns
- Requires a small monthly monitoring and automation fee per object.

In the S3 Intelligent-Tiering storage class, Amazon S3 monitors objects’ access patterns. If you haven’t accessed an object for 30 consecutive days, Amazon S3 automatically moves it to the infrequent access tier, S3 Standard-IA. If you access an object in the infrequent access tier, Amazon S3 automatically moves it to the frequent access tier, S3 Standard.

<hr>

- ## S3 Glacier Deep Archive

<hr>

- Lowest cost object storage class ideal for archiving.
- Also able to retrieve objects within 12 hours.

<hr>

# Amazon Elastic File System (Amazon EFS)

<hr>

- ## File Storage

<hr>

- In file storage, multiple clients (such as users, applications, servers, and so on) can access data that is stored in shared file folders.
- In this approach, storage server uses block storage with a local file system to organize files.
- Compared to block storage and object storage, file storage is ideal for use cases in which a large number of services and resources need to access the same data at the same time.

<hr>

# Amazon Elastic File System (Amazon EFS)

<hr>

- Amazon EFS is a scalable file system used with AWS Cloud services and on premises resources.
- As you add or remove files, Amazon EFS grows and shrinks automatically.
- It can scale up to petabytes without destroying applications.

<hr>

# Amazon EBS Vs Amazon EFS

<hr>

- ## Amazon EBS

<hr>

- An Amazon EBS volume stores data in a single Availability Zone.
- To attach an Amazon EC2 instance to an EBS volume, both the Amazon EC2 instance and the EBS volume must reside within the same Availability Zone.

<hr>

- ## Amazon EFS

<hr>

- Amazon EFS is a regional service. It stores data in and across multiple Availability Zones.
- The duplicate storage enables you to access data concurrently from all the Availability Zones in the Region where a file system is located.
- Additionally, on premises servers can access Amazon EFS using AWS Direct Connect.

<hr>

# Amazon Relational Database Service (Amazon RDS)

<hr>

- Amazon RDS is a service that enables you to run relational databases in the AWS Cloud.
- Amazon RDS is a managed service that automates tasks such as hardware provisioning, database setup, patching, and backups.
- Amazon RDS provides a number of different security options, like protecting data at rest and protecting data in transit (While it is being sent and received)

<hr>

# Amazon RDS Database Engines

<hr>

- Amazon RDS is available on six database engines, here they are:
- Amazon Aurora
- PostgreSQL
- MySQL
- MariaDB
- Oracle Database
- Microsoft SQL Server

<hr>

# Amazon Aurora

<hr>

- Amazon Aurora is an enterprise class relational database.
- Compatible with MySQL and PostgreSQL relational databases.
- Up to 5 times faster than standard MySQL databases and up to times faster than standard PostgreSQL databases.
- It helps to reduce your database costs by reducing unnecessary input/ output (IO) operations, while ensuring that your database resources remain reliable and available.
- Consider Amazon Aurora if your workloads require high availability.
- It replicates six copies of your data across 3 availability zones and continuously backs up your data to Amazon S3

<hr>

# Amazon DynamoDB

<hr>

- DynamoDB is serverless, which means that you don't have to provision, patch, or manage servers.
- You also don't have to install, maintain, or operate software.
- Best for high speed applications
- It's a non-relational database.

<hr>

- DynamoDB scales automatically according to the situation.
- This makes it a suitable choice for use cases that require high performance while scaling.

<hr>

# Amazon Redshift

<hr>

- It is a data warehousing service that you can use for big data analytics.
- It offers the ability to collect data from many sources and helps you to understand relationship and trends across your data.

<hr>

# AWS Database Migration Service (AWS DMS)

<hr>

- AWS Database Migration Service (AWS DMS) enables you to migrate relational database, nonrelational database, and other types of data stores.
- With AWS DMS, we move data between a source database and a target database.
- The source and target database can be of same type or different types.
- During migration, the source database remains operational, reducing downtime for any applications that rely on the database.

<hr>

- ## Other use cases for AWS DMS

<hr>

- ### Development and test database migrations

<hr>

- Enabling developers to test applications against production data without affecting production users.

<hr>

- ### Database Consolidation

<hr>

- Combining several databases into a single database

<hr>

- ### Continuous Replication

<hr>

- Sending ongoing copies of your data to other target sources instead of doing a one-time migration.

<hr>

# Additional Database Services

<hr>

- ## Amazon DocumentDB

<hr>

- Amazon DocumentDB is a document database service that supports MongoDB workloads. (MongoDB is a document database program.)

<hr>

- ## Amazon Neptune

<hr>

- Amazon Neptune is a graph database service.
- It is used to build and run applications that work with highly connected datasets, such as recommendation engines, fraud detection, and knowledge graphs.

<hr>

- ## Amazon Quantum Ledger Database (Amazon QLDB)

<hr>

- Amazon QLDB is a ledger database service.
- You can use Amazon QLDB to review a complete history of all the changes that have been made to your application data.

<hr>

- ## Amazon Managed Blockchain

<hr>

- It is a service that you can use to create and manage blockchain networks with open-source frameworks.
- Blockchain is a distributed ledger system that lets multiple parties run transactions and share data without a central authority.

<hr>

- ## Amazon ElastiCache

<hr>

- AmazonElastiCache is a service that adds caching layers on top of your databases to help improve the read times of common requests.
- It supports two types of data stores: Redis and Memcached

<hr>

- ## Amazon DynamoDB Accelerator (DAX)

<hr>

- Amazon DynamoDB Accelerator is an in-memory cache for DynamoDB.
- It helps improve response times from single digit milliseconds to microseconds.

<hr>

# Shared Responsibility Model

<hr>

- In AWS, both the customers and the AWS is responsible for the security of the resources.
- Shared responsibilities model divides the customer responsibilities (Commonly referred to as **Security In The Cloud**) and AWS responsibilities (commonly referred to as **Security Of The Cloud**)

<hr>

![alt](img22.png)

<hr>

You can think of this model as being similar to the division of responsibilities between a homeowner and a homebuilder. The builder (AWS) is responsible for constructing your house and ensuring that it is solidly built. As the homeowner (the customer), it is your responsibility to secure everything in the house by ensuring that the doors are closed and locked.

<hr>

