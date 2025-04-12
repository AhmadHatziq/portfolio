/* Change this file to get your personal Porfolio */

// Website related settings
const settings = {
  isSplash: false, // Change this to false if you don't want Splash screen.
};

//SEO Related settings
const seo = {
  title: "Hatziq's Portfolio",
  description: `
   A passionate individual who always thrives to work on impactful projects and solve technical challenges
  `,
  og: {
    title: "Hatziq's Portfolio",
    type: "website",
    url: "https://ahmadhatziq.github.io/portfolio/",
  },
};

//Home Page
const greeting = {
  title: "Hatziq",
  logo_name: "Ahmad Hatziq",
  nickname: "",
  subTitle: `
    A passionate individual who always thrives to work on impactful projects and solve technical challenges
  `,
  resumeLink:
    "https://drive.google.com/file/d/108vbEJ6fdL-xYvTI6QfhtGOURvy7TETi/view?usp=sharing",
  portfolio_repository: "https://github.com/AhmadHatziq/portfolio",
  githubProfile: "https://github.com/AhmadHatziq/",
  linkedInLink: "https://www.linkedin.com/in/ahmad-hatziq-74a938171/",
};

const socialMediaLinks = [
  /* Your Social Media Link */
  // github: "https://github.com/ashutosh1919",
  // linkedin: "https://www.linkedin.com/in/ashutosh-hathidara-88710b138/",
  // gmail: "ashutoshhathidara98@gmail.com",
  // gitlab: "https://gitlab.com/ashutoshhathidara98",
  // facebook: "https://www.facebook.com/laymanbrother.19/",
  // twitter: "https://twitter.com/ashutosh_1919",
  // instagram: "https://www.instagram.com/layman_brother/"

  {
    name: "Github",
    link: "https://github.com/AhmadHatziq/",
    fontAwesomeIcon: "fa-github", // Reference https://fontawesome.com/icons/github?style=brands
    backgroundColor: "#181717", // Reference https://simpleicons.org/?q=github
  },
  {
    name: "LinkedIn",
    link: "https://www.linkedin.com/in/ahmad-hatziq-74a938171/",
    fontAwesomeIcon: "fa-linkedin-in", // Reference https://fontawesome.com/icons/linkedin-in?style=brands
    backgroundColor: "#0077B5", // Reference https://simpleicons.org/?q=linkedin
  },
  {
    name: "Gmail",
    link: "mailto:hatziq@gmail.com",
    fontAwesomeIcon: "fa-google", // Reference https://fontawesome.com/icons/google?style=brands
    backgroundColor: "#D14836", // Reference https://simpleicons.org/?q=gmail
  },
];

const skills = {
  data: [
    {
      title: "Back-End & Software Engineering",
      fileName: "firstSkill",
      skills: [
        "⚡ I dabbled in building backend APIs with Python (FastAPI, Flask, Django) and NodeJS — all in the name of clean, scalable microservices",
        "⚡ Spent a good amount of time working with databases (eg MS SQL, MySQL) and also familiar with wrangling data via ETL workflows",
        "⚡ Hooked up business logic, async tasks (like Redis + rq), and data pipelines to make apps tick behind the scenes",
        "⚡ Played around with Golang and Java — not a pro, but I know my way around",
      ],
      softwareSkills: [
        {
          skillName: "Python",
          fontAwesomeClassname: "ion-logo-python",
          style: {
            backgroundColor: "transparent",
            color: "#3776AB",
          },
        },
        {
          skillName: "JavaScript",
          fontAwesomeClassname: "devicon-plain:javascript",
          style: {
            backgroundColor: "#323330",
            color: "#f0db4f",
          },
        },
        {
          skillName: "NodeJS",
          fontAwesomeClassname: "devicon-plain:nodejs-wordmark",
          style: {
            color: "#339933",
          },
        },
        {
          skillName: "Microsoft SQL Server",
          fontAwesomeClassname: "simple-icons:microsoftsqlserver",
          style: { color: "#CC2927" },
        },
        {
          skillName: "Redis",
          fontAwesomeClassname: "simple-icons:redis",
          style: { color: "#DC382D" },
        },
        {
          skillName: "Java",
          fontAwesomeClassname: "logos-java",
          style: { backgroundColor: "transparent" },
        },
        {
          skillName: "Golang",
          fontAwesomeClassname: "logos-go",
          style: { backgroundColor: "transparent" },
        },
      ],
    },
    {
      title: "DevOps, DevSecOps & SRE",
      fileName: "secondSkill",
      skills: [
        "⚡ I got my hands dirty running Kubernetes clusters on AWS and Azure — kept containerized APIs running smooth and steady",
        "⚡ Set up monitoring pipelines that pushed app metrics to dashboards, so we could actually track if our SLOs were behaving",
        "⚡ Cooked up custom Docker base images (NodeJS, Python, JDK) to keep builds consistent, secure, and not too spicy",
        "⚡ Slipped in security tools like Trivy, Prisma, and Vera into CI/CD — so scans and reports ran while we sipped coffee",
        "⚡ Automated a bunch of deployments with GitHub Actions, GitLab CI, and Azure Pipelines — across a mess of cloud-native stuff",
      ],
      softwareSkills: [
        {
          skillName: "AWS",
          fontAwesomeClassname: "simple-icons:amazonaws",
          style: {
            color: "#FF9900",
          },
        },
        {
          skillName: "Azure",
          fontAwesomeClassname: "simple-icons:microsoftazure",
          style: {
            color: "#0089D6",
          },
        },
        {
          skillName: "Docker",
          fontAwesomeClassname: "simple-icons:docker",
          style: {
            color: "#1488C6",
          },
        },
        {
          skillName: "Kubernetes",
          fontAwesomeClassname: "simple-icons:kubernetes",
          style: {
            color: "#326CE5",
          },
        },
        {
          skillName: "Linux",
          fontAwesomeClassname: "simple-icons:linux",
          style: { color: "#FCC624" },
        },
        {
          skillName: "Git",
          fontAwesomeClassname: "simple-icons:git",
          style: { color: "#F05032" },
        },
      ],
    },
    {
      title: "Cybersecurity & Security Architecture",
      fileName: "thirdSkill",
      skills: [
        "⚡ Gave architecture-level security advice — yeah it’s ‘high level’, but I still got my hands dirty and knew what I was talking about (promise!)",
        "⚡ Got hands-on with DB encryption, hardened cloud infra, and tightened up CI/CD pipelines with security controls baked in",
        "⚡ Wrote detection and response playbooks so the team could handle incidents without breaking a sweat",
        "⚡ Checked apps against NIST, CIS Benchmarks, ISO 27001 — basically played risk cop for the whole stack",
        "⚡ Whipped up Python code to automate workflows, enrich alerts, pull in CTI and save analysts from drowning in logs",
        "⚡ Lived the SOC life — triaged incidents, dug through logs, and wrangled SIEM dashboards with threat intel feeds flying in",
      ],
      softwareSkills: [
        {
          skillName: "Cryptography",
          fontAwesomeClassname: "vscode-icons:file-type-codeowners",
          style: {
            color: "#4285F4",
          },
        },
        {
          skillName: "Linux",
          fontAwesomeClassname: "vscode-icons:folder-type-linux",
          style: {
            color: "#FF9900",
          },
        },
        {
          skillName: "Device Security",
          fontAwesomeClassname: "game-icons:laptop",
          style: {
            color: "#0089D6",
          },
        },
        {
          skillName: "Databases",
          fontAwesomeClassname: "system-uicons:database",
          style: {
            color: "#1488C6",
          },
        },
        {
          skillName: "Encryption",
          fontAwesomeClassname: "game-icons:padlock-open",
          style: {
            color: "#326CE5",
          },
        },
        {
          skillName: "Systems Security",
          fontAwesomeClassname: "simple-icons:amazonec2",
          style: { color: "#FF9900" },
        },
      ],
    },
    {
      title: "Data Science, ML & Analytics",
      fileName: "fourthSkill",
      skills: [
        "⚡ Worked with ML engineers to get fraud-detection models into production — we’re talking classifiers, features, and the occasional weird edge case",
        "⚡ Got cozy with R and Python (Pandas, NumPy) for wrangling messy data, engineering features, and running experiments — because Excel wasn’t built for this kind of pain",
        "⚡ Threw together a proof-of-concept ML model to catch malicious URLs using gradient boosting and a bit of feature wizardry",
        "⚡ Built a time series model (SARIMAX) to predict nasty dengue outbreaks in Singapore",
      ],
      softwareSkills: [
        {
          skillName: "Python",
          fontAwesomeClassname: "ion-logo-python",
          style: {
            backgroundColor: "transparent",
            color: "#3776AB",
          },
        },
        {
          skillName: "R",
          fontAwesomeClassname: "simple-icons:r",
          style: { color: "#r" },
        },
        {
          skillName: "Jupyter",
          fontAwesomeClassname: "simple-icons:jupyter",
          style: { color: "#F37626" },
        },
        {
          skillName: "NumPy",
          fontAwesomeClassname: "simple-icons:numpy",
          style: { color: "#013243" },
        },
        {
          skillName: "Spark",
          fontAwesomeClassname: "simple-icons:apachespark",
          style: { color: "#E25A1C" },
        },
      ],
    },
    {
      title: "Full Stack Development",
      fileName: "fifthSkill",
      skills: [
        "⚡ Whipped up full-stack apps using ReactJS and Django — frontend, backend, and everything in between",
        "⚡ Built REST APIs and wired them up to snappy UIs — because clicking buttons should actually do something",
        "⚡ Tweaked and styled this very portfolio site with React — a hands-on way to flex what I’ve been learning",
        "⚡ Messed around with Django’s ORM for forms, auth, and DB stuff — so users could sign up, log in, and not break things",
        "⚡ Built 'Geocache', a Django-based treasure hunting app with Google Maps, markers, image uploads, and even some user banter (comments)",
      ],
      softwareSkills: [
        {
          skillName: "React JS",
          fontAwesomeClassname: "simple-icons:react",
          style: {
            color: "#61DAFB",
          },
        },
        {
          skillName: "Node JS",
          fontAwesomeClassname: "simple-icons:nodedotjs",
          style: {
            color: "#5FA04E",
          },
        },
        {
          skillName: "Django",
          fontAwesomeClassname: "simple-icons:django",
          style: {
            color: "#092E20",
          },
        },
        {
          skillName: "Google Maps API",
          fontAwesomeClassname: "simple-icons:googlemaps",
          style: {
            color: "#4285F4",
          },
        },
      ],
    },
  ],
};

// Education Page
const competitiveSites = {
  competitiveSites: [
    {
      siteName: "LeetCode",
      iconifyClassname: "simple-icons:leetcode",
      style: {
        color: "#F79F1B",
      },
      profileLink: "https://leetcode.com/layman_brother/",
    },
    {
      siteName: "HackerRank",
      iconifyClassname: "simple-icons:hackerrank",
      style: {
        color: "#2EC866",
      },
      profileLink: "https://www.hackerrank.com/layman_brother",
    },
    {
      siteName: "Codechef",
      iconifyClassname: "simple-icons:codechef",
      style: {
        color: "#5B4638",
      },
      profileLink: "https://www.codechef.com/users/ashutosh_1919",
    },
    {
      siteName: "Codeforces",
      iconifyClassname: "simple-icons:codeforces",
      style: {
        color: "#1F8ACB",
      },
      profileLink: "http://codeforces.com/profile/layman_brother",
    },
    {
      siteName: "Hackerearth",
      iconifyClassname: "simple-icons:hackerearth",
      style: {
        color: "#323754",
      },
      profileLink: "https://www.hackerearth.com/@ashutosh391",
    },
    {
      siteName: "Kaggle",
      iconifyClassname: "simple-icons:kaggle",
      style: {
        color: "#20BEFF",
      },
      profileLink: "https://www.kaggle.com/laymanbrother",
    },
  ],
};

const degrees = {
  degrees: [
    {
      title: "National University of Singapore (NUS)",
      subtitle:
        "B.Eng in Systems Engineering, Minors in Computer Science & Statistics",
      logo_path: "nus_logo.png",
      alt_name: "NUS ISE",
      duration: "2016 July - 2020 May",
      descriptions: [
        "⚡ Started out in Industrial & Systems Engineering — learned about supply chains, optimization, simulations, and a healthy dose of operations research",
        "⚡ Somewhere along the way, I realized I liked coding more than manufacturing or logistics... but by then, it was a bit too late to jump ship to Computer Science. So I doubled down with minors in CS and Stats instead",
        "⚡ Systems Engineering still gave me solid exposure to computing — stuff like software development, networks and even a bit of ML sprinkled in",
        "⚡ Followed my curiosity into tech and data — interned as a Data Engineer, and wrapped things up with a Java-based capstone project in Software Development",
      ],
      website_link:
        "https://drive.google.com/file/d/1qqNVNAuG7a_oaXCHRhRmeG30JRdbYh5a/view",
    },
    {
      title: "National University of Singapore (NUS)",
      subtitle: "M.Sc. in Statistics",
      logo_path: "nus_logo.png",
      alt_name: "NUS Msc Stats",
      duration: "2020 July - 2021 May",
      descriptions: [
        "⚡ I’ve always liked coding, but I also had a thing for data — so I went down the stats rabbit hole and took up a MSc in Statistics",
        "⚡ Took on a mix of technical courses like Machine Learning, Stochastic Processes, and Spatial Stats — the kind of math that makes your brain both cry and high-five you",
        "⚡ Outside of school, I kept busy with online coursework in NLP, Data Engineering, Spark and more — because one syllabus was clearly not enough",
      ],
      website_link:
        "https://drive.google.com/file/d/1r1IjpvcoeavG88rT6FGs0PjONHVcrPwt",
    },
    {
      title: "Singapore University of Techology & Design (SUTD)",
      subtitle: "Graduate Diploma in Cybersecurity",
      logo_path: "sutd_logo.png",
      alt_name: "SUTD",
      duration: "2021 July - 2021 Oct",
      descriptions: [
        "⚡ Think of this program as a crash course in hacking... but the legal kind",
        "⚡ Covered topics like cybersecurity tools, digital forensics, systems security, and computer networks — learnt that firewalls don't actually involve fire",
        "⚡ It deepened my understanding of cybersecurity’s core areas and gave me a structured way to build on-the-job knowledge",
      ],
      website_link:
        "https://drive.google.com/file/d/1UNnqm_lkg1q1KjspfynPxJfRd0mmr3yn/view?usp=drive_link",
    },
    {
      title: "WorldQuant University",
      subtitle: "M.Sc. Financial Engineering",
      logo_path: "world-quant-logo.png",
      alt_name: "WQ MFE",
      duration: "2024 Oct - Ongoing",
      descriptions: [
        "⚡ Because one Master’s degree clearly wasn’t enough, I jumped into an MFE to deep dive further into finance (thanks MAS)",
        "⚡ After a stats degree full of elegant math and not-so-elegant p-values, I was itching to apply those skills to something real — like markets, risk, and money actually moving",
        "⚡ So far, I’ve covered Options Trading and time series models like GARCH — finally putting stats to work outside a chalkboard",
        "⚡ I’m only 3 out of 10 courses in... so time will tell if I finish this (fingers crossed and caffeinated).",
      ],
      website_link:
        "https://drive.google.com/file/d/1DHGF1BYhu7_Ga-VruDW4Xg2njvM41zTo/view?usp=drive_link",
    },
  ],
};

const certifications = {
  description: `
    Collecting certs like Pokémon — fueled by curiosity, not by grinding Splash with Magikarp
  `,
  certifications: [
    {
      title: "CISSP",
      subtitle: "- ISC²",
      logo_path: "cissp_logo.png",
      certificate_link:
        "https://www.credly.com/badges/1c8c8a3c-7f51-4079-9a32-1bb53bcfbeb2/public_url",
      alt_name: "CISSP",
      color_code: "#edf5ef",
    },
    {
      title: "Kubestronaut",
      subtitle: "- Linux Foundation",
      logo_path: "kubestronaut_logo.png",
      certificate_link:
        "https://www.credly.com/badges/f7a65dc4-44b4-4686-8eb0-5011cfb83f75",
      alt_name: "",
      color_code: "#F5F7FA",
    },
    {
      title: "Security Specialization",
      subtitle: "- AWS",
      logo_path: "aws_security_spec.png",
      certificate_link:
        "https://www.credly.com/badges/6a2db28e-d833-4767-af48-7331576c78fe",
      alt_name: "AWS Security",
      color_code: "#eb8423",
    },
    {
      title: "DevSecOps",
      subtitle: "- Cloud Academy",
      logo_path: "cloud_academy_logo.png",
      certificate_link:
        "https://certificates.platform.qa.com/e91ec5c80ceb31549422c190f0e0b90d97bc2454.pdf",
      alt_name: "DevSecOps",
      color_code: "#005eec",
    },

    {
      title: "Solutions Architect (Associate)",
      subtitle: "- AWS",
      logo_path: "aws_saa.png",
      certificate_link:
        "https://www.credly.com/badges/03b05a5a-5ab9-4ce1-bb1b-c05459ad1947/public_url",
      alt_name: "AWS SAA",
      color_code: "#eb8423",
    },
    {
      title: "SC-900: Security, Compliance, Identity Fundamentals",
      subtitle: "- Microsoft Azure",
      logo_path: "azure_sc900_logo.png",
      certificate_link:
        "https://www.credly.com/badges/a5870911-077c-40b7-957e-47cf929335d2/",
      alt_name: "Microsoft",
      color_code: "#1F70C199",
    },
    {
      title: "Blue Team Level 2",
      subtitle: "- Security Blue Team",
      logo_path: "btl2_logo.png",
      certificate_link:
        "https://www.credly.com/badges/60ee529f-2492-4cf1-a7c4-58a320b8a641",
      alt_name: "BTL 2",
      color_code: "#00000099",
    },
    {
      title: "Golang Specialization",
      subtitle: "- Coursera (UC Irvine)",
      logo_path: "coursera_logo.png",
      certificate_link:
        "https://www.coursera.org/account/accomplishments/specialization/4GHV3983B4M3",
      alt_name: "Coursera Golang",
      color_code: "#2A73CC",
    },
    {
      title: "Professional Certificate in Web Programming",
      subtitle: "- HarvardX (edX)",
      logo_path: "edx_logo.svg",
      certificate_link:
        "https://credentials.edx.org/credentials/e2496a072f1c441b8ddf4edccd2bf0ae/",
      alt_name: "",
      color_code: "#02262b",
    },
    {
      title: "Cybersecurity Operations (Associate)",
      subtitle: "- Cisco",
      logo_path: "cisco_cyberops_logo.png",
      certificate_link:
        "https://drive.google.com/file/d/1krUEYhL6Nwx7SesHIywb7TPPuVPA-pxG/view",
      alt_name: "Cisco Cbrops",
      color_code: "#ffffff",
    },
    {
      title: "Web Development using React",
      subtitle: "- NUS",
      logo_path: "nus_logo_blue.svg",
      certificate_link:
        "https://drive.google.com/file/d/1gsDrJ1D7l8DEzwCimyyIcufjCrJyl9KF/view",
      alt_name: "",
      color_code: "#003d7c",
    },
    {
      title: "Mobile App Development using React Native",
      subtitle: "- NUS",
      logo_path: "nus_logo_blue.svg",
      certificate_link:
        "https://drive.google.com/file/d/1gju4mZph-yUDmhazh1Ov0VHA-t9tvaYf/view",
      alt_name: "",
      color_code: "#003d7c",
    },

    {
      title: "Foundations of Financial Engineering",
      subtitle: "- WorldQuant University",
      logo_path: "wqu_foundations_logo.png",
      certificate_link:
        "https://www.credly.com/badges/8eff2b28-451d-4ce0-9127-f4e62e2c222c/public_url",
      alt_name: "FFE WQU",
      color_code: "#bf94b4",
    },
    {
      title: "LLMs using LangChain",
      subtitle: "- Educative",
      logo_path: "educative_logo.png",
      certificate_link:
        "https://www.educative.io/verify-certificate/An5VrvSlJmxM1DloQUBGGGwv5xZYc9",
      alt_name: "",
      color_code: "#4285F499",
    },
    {
      title: "Github Actions",
      subtitle: "- KodeKloud",
      logo_path: "kodekloud_logo.jpg",
      certificate_link:
        "https://learn.kodekloud.com/certificate/2D0FAD41E0F3-2EE83A9B6E0E-2D0FA70ED0A5",
      alt_name: "KodeKloud Github Actions",
      color_code: "#000000",
    },
    {
      title: "Neural Networks & Deep Learning",
      subtitle: "- Deep Learning AI",
      logo_path: "deeplearning_ai_logo.png",
      certificate_link:
        "https://www.coursera.org/account/accomplishments/verify/9NQ85VJ7VWXU",
      alt_name: "GCP",
      color_code: "#00000099",
    },
    {
      title: "Systems Design",
      subtitle: "- AlgoExpert",
      logo_path: "algoexpert_logo.png",
      certificate_link:
        "https://certificate.algoexpert.io/SystemsExpert%20Certificate%20SE-7263943d29",
      alt_name: "",
      color_code: "#ffffff",
    },
    {
      title: "Full Stack Open",
      subtitle: "- University of Helsinki",
      logo_path: "fullstack_open_logo.png",
      certificate_link:
        "https://studies.cs.helsinki.fi/stats/api/certificate/fullstackopen/en/d898d3572032727a7bcf5e1eb0fd388d",
      alt_name: "",
      color_code: "#ffffff",
    },
    {
      title: "Certified Kubernetes Security (CKS)",
      subtitle: "- Linux Foundation",
      logo_path: "cks_logo.png",
      certificate_link:
        "https://ti-user-certificates.s3.amazonaws.com/e0df7fbf-a057-42af-8a1f-590912be5460/806e41dd-f795-435f-a2a8-951c8c8b6ed8-ahmad-hatziq-bin-mohamad-ae18bde2-ceb5-41e0-9a12-0c97de3c1cdf-certificate.pdf",
      alt_name: "CKS",
      color_code: "#ffffff",
    },
    {
      title: "Certified Kubernetes Administrator (CKA)",
      subtitle: "- Linux Foundation",
      logo_path: "cka_logo.png",
      certificate_link:
        "https://ti-user-certificates.s3.amazonaws.com/e0df7fbf-a057-42af-8a1f-590912be5460/806e41dd-f795-435f-a2a8-951c8c8b6ed8-ahmad-hatziq-bin-mohamad-ef46f198-dee3-4f24-ad68-aabe0604661e-certificate.pdf",
      alt_name: "CKA",
      color_code: "#F5F7FA",
    },
    {
      title: "Certified Kubernetes Application Developer (CKAD)",
      subtitle: "- Linux Foundation",
      logo_path: "ckad_logo.png",
      certificate_link:
        "https://www.credly.com/badges/1ce63c34-0e6f-478e-a196-32c5e2e3c283",
      alt_name: "CKA",
      color_code: "#F5F7FA",
    },
    {
      title: "Data Engineering",
      subtitle: "- Udacity",
      logo_path: "udacity_logo.png",
      certificate_link: "https://www.udacity.com/certificate/HLPFXFGQ",
      alt_name: "",
      color_code: "#2f3c45",
    },
    {
      title: "DSE230x: Big Data Analytics Using Spark",
      subtitle: "- edX (UC San Diego)",
      logo_path: "edx_logo.svg",
      certificate_link:
        "https://courses.edx.org/certificates/7bbc27de20194f6e9ed7ed0061a71bc0",
      alt_name: "",
      color_code: "#02262b",
    },
    {
      title: "Docker & Kubernetes: The Complete Guide",
      subtitle: "- Udemy",
      logo_path: "udemy_logo.svg",
      certificate_link:
        "https://www.udemy.com/certificate/UC-527ba166-7011-49a4-92b5-10257247fc2b/",
      alt_name: "",
      color_code: "#B8860B",
    },
    {
      title: "FHT302: Advanted Threat Hunting with Falcon",
      subtitle: "- CrowdStrike University",
      logo_path: "crowdstrike_uni_logo.png",
      certificate_link:
        "https://drive.google.com/file/d/1UpYrMukXe-2-RHtqRQdLchesTvXXhgnE/view",
      alt_name: "",
      color_code: "#000000",
    },
    {
      title: "CST346: Structured Analytic Techniques",
      subtitle: "- CrowdStrike University",
      logo_path: "crowdstrike_uni_logo.png",
      certificate_link:
        "https://drive.google.com/file/d/1iBOaC2WH2RkXp0Plg5a8q5gYSFn8o3op/view",
      alt_name: "",
      color_code: "#000000",
    },

    {
      title: "Professional Certificate in Public Policy & Administration",
      subtitle: "- NUS",
      logo_path: "nus_logo_blue.svg",
      certificate_link:
        "https://credentials.nus.edu.sg/631ef6c9-4c45-4e34-af4f-12e0f18ff54d#acc.gDTf50PE",
      alt_name: "",
      color_code: "#003d7c",
    },
    {
      title: "Foundations in Artificial Intelligence",
      subtitle: "- AI Singapore",
      logo_path: "ai_sg_logo.png",
      certificate_link:
        "https://certified.aisingapore.org/77a71cbb-d268-460d-9af4-3296db05b676#acc.UewzL6FW",
      alt_name: "",
      color_code: "#000000",
    },
    {
      title: "Agile Software Development",
      subtitle: "- Udacity",
      logo_path: "udacity_logo.png",
      certificate_link: "https://www.udacity.com/certificate/HPVHGH9L",
      alt_name: "",
      color_code: "#2f3c45",
    },
    {
      title: "Deep Reinforcement Learning",
      subtitle: "- Udacity",
      logo_path: "udacity_logo.png",
      certificate_link: "https://www.udacity.com/certificate/JPKGKNGF",
      alt_name: "",
      color_code: "#2f3c45",
    },
    {
      title: "Artificial Intelligence",
      subtitle: "- Udacity",
      logo_path: "udacity_logo.png",
      certificate_link: "https://www.udacity.com/certificate/TZHKTE7P",
      alt_name: "",
      color_code: "#2f3c45",
    },
    {
      title: "STV1.3x: Formal Software Verification",
      subtitle: "- edX (University of Maryland)",
      logo_path: "edx_logo.svg",
      certificate_link:
        "https://courses.edx.org/certificates/89a704ca0108464ebf3279305115f3a5",
      alt_name: "",
      color_code: "#02262b",
    },
    {
      title: "Fundamentals of Engineering",
      subtitle: "- Coursera (Goergia Tech)",
      logo_path: "coursera_logo.png",
      certificate_link:
        "https://www.coursera.org/account/accomplishments/certificate/6DF2MN9PZNYT",
      alt_name: "",
      color_code: "#2A73CC",
    },
    {
      title: "Digitalisation Passport Programme",
      subtitle: "- NUS",
      logo_path: "nus_logo_blue.svg",
      certificate_link:
        "https://drive.google.com/file/d/1YypH73klVuhSJdp6HKq7Y52S29CUa9IB/view",
      alt_name: "",
      color_code: "#003d7c",
    },
    {
      title: "Machine Learning",
      subtitle: "- Coursera (Stanford)",
      logo_path: "coursera_logo.png",
      certificate_link:
        "https://www.coursera.org/account/accomplishments/verify/VAVEMGBUBUHK",
      alt_name: "",
      color_code: "#2A73CC",
    },
    {
      title: "Kubernetes and Cloud Native Associate (KCNA)",
      subtitle: "- Linux Foundation",
      logo_path: "kcna_logo.png",
      certificate_link:
        "https://www.credly.com/badges/f3e8e2b6-1de9-41c1-b858-edbb2901ee28",
      alt_name: "",
      color_code: "#F5F7FA",
    },
    {
      title: "Kubernetes and Cloud Native Security Associate (KCSA)",
      subtitle: "- Linux Foundation",
      logo_path: "kcsa_logo.png",
      certificate_link:
        "https://www.credly.com/badges/b644fb5e-3cc0-4e80-8f49-516dfa7c107b",
      alt_name: "",
      color_code: "#F5F7FA",
    },
    {
      title: "CEH",
      subtitle: "- EC Council",
      logo_path: "ceh_logo.png",
      certificate_link:
        "https://drive.google.com/file/d/1jcfKw51wJrdVmXxDnjooS_wnXCjOj3mk/view",
      alt_name: "CEH",
      color_code: "#000000",
    },
    {
      title: "Microsoft Visual Basic for Applications (VBA)",
      subtitle: "- Acadia Training",
      logo_path: "acadia_training_logo.png",
      certificate_link:
        "https://drive.google.com/file/d/1V4Wh6KSRf5MMPvhSqpU5jGneelbIE2Et/view",
      alt_name: "",
      color_code: "#ffffff",
    },
    {
      title: "WILEY Certified Data Analyst",
      subtitle: "- WILEY",
      logo_path: "wiley_logo.jpg",
      certificate_link:
        "https://drive.google.com/file/d/1XbZER7KbdTiljcBtNtOcccW8baoUEhOb/view",
      alt_name: "",
      color_code: "#000000",
    },
    {
      title: "Deep Learning with Pytorch: Zero to GANs",
      subtitle: "- FreeCodeCamp",
      logo_path: "freecodecamp_logo.png",
      certificate_link: "https://jovian.ai/certificate/MFQWCNRTGA",
      alt_name: "",
      color_code: "#0a0a22",
    },
    {
      title: "Data Analysis with Python: Zero to Pandas",
      subtitle: "- FreeCodeCamp",
      logo_path: "freecodecamp_logo.png",
      certificate_link: "https://jovian.ai/certificate/MFQWCOJWHE",
      alt_name: "",
      color_code: "#0a0a22",
    },
  ],
};

// Experience Page
const experience = {
  title: "Experience",
  subtitle: "Work",
  description_paragraph_1: `
    I’ve worked as a Software Engineer at places from government agencies to a health‑tech startup.
    I’ve dipped my toes into software development, cybersecurity, DevOps, cloud, and even machine learning.
    `,
  description_paragraph_2: `
    At the heart of it, I’m a curious tech problem-solver who enjoys building secure, scalable systems — and yes, I’m a proud nerd 🤓
  `,
  header_image_path: "experience.svg",
  sections: [
    {
      title: "Work",
      work: true,
      experiences: [
        {
          title: "Software Engineer (Security)",
          company: "Monetary Authority of Singapore (contracted under Jobster)",
          company_url: "https://www.mas.gov.sg/",
          logo_path: "mas_logo.jpg",
          duration: "Oct 2024 - Present",
          location: "Singapore",
          description: `
            I’m helping integrate  internal apps with stronger security — think advanced DB encryption methods.
            I am also involved in the GRC side of things, as well as Software Security and DevSecOps. 
          `,
          color: "#000000",
        },
        {
          title: "Software Engineer (Back-End, DevOps)",
          company: "Amplify Health",
          company_url: "https://www.amplifyhealth.com/en/index",
          logo_path: "amplify_health_logo.png",
          duration: "June 2023 - Oct 2024",
          location: "Singapore",
          description: `
            I worked on a fraud‑detection ML claims system used by AIA, Great Eastern, and Prudential.
            I wore many hats; from DevOps/DevSecOps to SRE to back‑end work on the queuing and metrics systems.
            `,
          color: "#0879bf",
        },
        {
          title: "Cybersecurity Engineer / Developer",
          company: "Cyber Security Agency",
          company_url: "https://www.csa.gov.sg/",
          logo_path: "csa_logo.jpg",
          duration: "Jul 2021 - Jun 2023",
          location: "Singapore",
          description: `
            I split my time between SOC analyst work (responding to alerts) and SOC engineering (automating playbooks and developing tools)
            I even developed a Python app to parse data dumps for sensitive PII.
          `,
          color: "#9b1578",
        },
        {
          title: "Software Engineer (Java)",
          company: "Infineon",
          company_url: "https://www.infineon.com/",
          logo_path: "infineon_logo.png",
          duration: "Aug 2019 - Jun 2020",
          location: "Singapore",
          description: `
            I teamed up with three others to build a Java app that feeds data into FlexSim factory‑floor simulations.
            Then we surfaced the results in Tableau dashboards for easy insights.
          `,
          color: "#fc1f20",
        },
        {
          title: "Data Engineer",
          company: "Ministry of Manpower",
          company_url: "https://www.mom.gov.sg/",
          logo_path: "mom_logo.png",
          duration: "Jan 2019 - Jun 2019",
          location: "Singapore",
          description: `
            I spent six months building end‑to‑end ETL pipelines with SQL Server, SSIS, and VBA.
            I automated data cleansing and then delivered interactive Power BI dashboards.
          `,
          color: "#fc1f20",
        },
        {
          title: "IT Engineer",
          company: "Singapore Police Force",
          company_url: "https://www.linkedin.com/company/freecopy/about/",
          logo_path: "apd_logo.jpg",
          duration: "Dec 2013 - Dec 2015",
          location: "Singapore",
          description: `
            I supported desktop users across the force and got a crash course in IT ops.
            I also completed basic police training and joined field ops to help keep Singapore safe.
          `,
          color: "#fc1f20",
        },
      ],
    },
    /*
    {
      title: "Internships",
      experiences: [
        {
          title: "Machine Learning Intern",
          company: "TikTok Inc.",
          company_url: "https://www.tiktok.com/en/",
          logo_path: "tiktok_logo.png",
          duration: "May 2022 - Aug 2022",
          location: "San Francisco, USA",
          description:
            "Building new features on the backend recommendation system, specifically ranking algorithms for Ads that touch hundreds of millions of people around the world. Improving online and offline content ranking algorithms by performing hard sample data replays for training steps.",
          color: "#000000",
        },
        {
          title: "Data Science Research Intern",
          company: "Delhivery Pvt. Ltd.",
          company_url: "https://www.delhivery.com/",
          logo_path: "delhivery_logo.png",
          duration: "May 2019 - Sept 2019",
          location: "Gurgaon, Haryana",
          description:
            "I have worked on project of predicting freight rates based on previous data. There were two objectives: (1) To build a forecasting engine to predict daily freight rates. (2) To embed feature in the model which can explain the seasonal major changes in freight rate based on regions and locations. I have closely worked with deep learning models in combination with statistical methods to create solution for this. At the end of internship, I had created model deployed on AWS EC2 with the use of Kafka stream jobs, ElasticSearch and PostgreSQL.",
          color: "#ee3c26",
        },
        {
          title: "Data Science Intern",
          company: "Intel Indexer LLC",
          company_url:
            "https://opencorporates.com/companies/us_dc/EXTUID_4170286",
          logo_path: "intel_logo.jpg",
          duration: "Nov 2018 - Dec 2018",
          location: "Work From Home",
          description:
            "This is financial Solution Company. I have made Supervised Learning model for the company which can perform time series analysis on Stock price data for 32 companies. I have built LSTM Neural Networks Model and trained the data of 32 companies for last 2 years. This model is also used for forecasting.",
          color: "#0071C5",
        },
      ],
    }, */
    /*
    {
      title: "Volunteerships",
      experiences: [
        {
          title: "Google Explore ML Facilitator",
          company: "Google",
          company_url: "https://about.google/",
          logo_path: "google_logo.png",
          duration: "June 2019 - April 2020",
          location: "Hyderabad, Telangana",
          description:
            "Explore Machine Learning (ML) is a Google-sponsored program for university students to get started with Machine Learning. The curriculum offers 3 tracks of ML Content (Beginner, Intermediate, Advanced) and relies on university student facilitators to train other students on campus and to build opensource projects under this program.",
          color: "#4285F4",
        },
        {
          title: "Microsoft Student Partner",
          company: "Microsoft",
          company_url: "https://www.microsoft.com/",
          logo_path: "microsoft_logo.png",
          duration: "Aug 2019 - May 2020",
          location: "Hyderabad, Telangana",
          description:
            "Microsoft Student Partner is a program for university students to lead the awareness and use of Cloud especially Azure tools in the development of their projects and startups. Under this program, I have organised hands on workshops and seminars to teach Cloud Computing concepts to students.",
          color: "#D83B01",
        },
        {
          title: "Mozilla Campus Captain",
          company: "Mozilla",
          company_url: "https://www.mozilla.org/",
          logo_path: "mozilla_logo.png",
          duration: "Oct 2019 - May 2020",
          location: "Kurnool, Andhra Pradesh",
          description:
            "My responsibility for this program was to create opensource environment in college and in the city. We have organised multiple hackathons on the problems collected by ordinary people from Kurnool city. We have build opensource community of our own college. The community is available at dsc_iiitdmk on github.",
          color: "#000000",
        },
        {
          title: "Developer Students Club Member",
          company: "DSC IIITDM Kurnool",
          company_url:
            "https://www.linkedin.com/company/developer-students-club-iiitdm-kurnool",
          logo_path: "dsc_logo.png",
          duration: "Jan 2018 - May 2020",
          location: "Kurnool, Andhra Pradesh",
          description:
            "We have well established developer club in college which is directly associated with Google Developers. We have developed many interdisciplinary projects under the membership of this club. We have organised workshops and activities on Android Application Development, Flutter and React JS.",
          color: "#0C9D58",
        },
        {
          title: "Developer Program Member",
          company: "Github",
          company_url: "https://github.com/",
          logo_path: "github_logo.png",
          duration: "July 2019 - PRESENT",
          location: "Work From Home",
          description:
            "I am actively contributing to many opensource projects. I have contributed to projects of organisations like Tensorflow, Uber, Facebook, Google, Scikit-learn, Kiwix, Sympy, Python, NVLabs, Fossasia, Netrack, Keras etc. These contributions include bug fixes, feature requests and formulating proper documentation for project.",
          color: "#181717",
        },
      ],
    }, */
  ],
};

// Projects Page
const projectsHeader = {
  title: "Projects",
  description: `
  When I’m not working or studying, I like to tinker with side projects, some academic, others just for fun or to explore a new tech stack.
 I like to build, break and learn by doing
  `,
  avatar_image_path: "projects_image.svg",
};

const publicationsHeader = {
  title: "Publications",
  description: "Some of my published Articles, Blogs and Research.",
  avatar_image_path: "projects_image.svg",
};

const publications = {
  data: [
    {
      id: "neuro-symbolic-sudoku-solver",
      name: "Neuro-Symbolic Sudoku Solver",
      createdAt: "2023-07-02T00:00:00Z",
      description: "Paper published in KDD KiML 2023",
      url: "https://arxiv.org/abs/2307.00653",
    },
    {
      id: "mdp-diffusion",
      name: "MDP-Diffusion",
      createdAt: "2023-09-19T00:00:00Z",
      description: "Blog published in Paperspace",
      url: "https://blog.paperspace.com/mdp-diffusion/",
    },
    {
      id: "consistency-models",
      name: "Consistency Models",
      createdAt: "2023-10-12T00:00:00Z",
      description: "Blog published in Paperspace",
      url: "https://blog.paperspace.com/consistency-models/",
    },
  ],
};

// Contact Page
const contactPageData = {
  contactSection: {
    title: "Contact Me",
    profile_image_path: "hatziq_cartoon_v1.png",
    description: "Happy for a quick chat! (Please don't spam me)",
  },

  /*
  blogSection: {
    title: "Blogs",
    subtitle:
      "I like to document some of my experiences in professional career journey as well as some technical knowledge sharing.",
    link: "https://blogs.ashutoshhathidara.com/",
    avatar_image_path: "blogs_image.svg",
  },
  */

  addressSection: {
    title: "Sunny Singapore",
    subtitle: "🏝️",
    locality: "",
    country: "SG",
    region: "",
    postalCode: "",
    streetAddress: "",
    avatar_image_path: "address_image.svg",
    location_map_link: "https://maps.app.goo.gl/JHnLm5zT79E62L1q6",
  },
  phoneSection: {
    title: "",
    subtitle: "",
  },
};

export {
  settings,
  seo,
  greeting,
  socialMediaLinks,
  skills,
  competitiveSites,
  degrees,
  certifications,
  experience,
  projectsHeader,
  publicationsHeader,
  publications,
  contactPageData,
};
