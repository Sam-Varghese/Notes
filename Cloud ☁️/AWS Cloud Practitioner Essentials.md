<h1 align="Center">AWS Cloud Essentials</h1>

<hr>

<img src="AWS_logo.jpg" />

<hr>

These are the notes I am making for [AWS Cloud Practitioner](https://www.coursera.org/learn/aws-cloud-practitioner-essentials) course.

<hr>

<h1>Client Server Model</h1>

<hr>

- A very nice concept wherein there is a client which makes a request to the servers in order to provide the required information/ access ...
- A server can be services like **Amazon Elastic Compute Cloud** (*Amazon EC2*), a type of virtual server.

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

- Next, we simply connect our  programs and applications to the instance.

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