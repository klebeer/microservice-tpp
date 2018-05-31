
--bgcolor black
--fgcolor white
--boldon
--title EcuadorJUG

--fgcolor green

--center Microservicios:

--center Analizando la "Arquitectura" de microservicios con un caso práctico
--boldoff


--fgcolor white

--author Kleber Ayala <dev@null.ec>
--center Quito, Ecuador
--date today




--newpage BOA
--fgcolor green
--boldon
--huge B.O.A.
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
--boldon 
--ulon
Buzzword Oriented Architecture
--uloff

---

 * block chain,

 * virtual reality,

 * serverless,

 * self-driving cars,

 * artificial intelligence,

 * containers,

--boldon
 * microservices,

--boldoff
 * …

---
--exec sh images.sh images/buzzword.jpg

--newpage BOA2
--fgcolor green
--boldon
--huge B.O.A.
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
--boldon 
--ulon
Buzzword Oriented Architecture in a nutshell
--uloff

---

* block chain = Una base de datos fancy

* virtual reality = teléfonos en cascos

* serverless = servidores en la nube de Amazon

* self-driving cars = control de crucero extremadamente caro

* artificial intelligence = miles de IF statements

* containers = dos líneas de configuración por línea de código

--boldon
* microservices = reduciendo la complejidad aumentando la complejidad

--boldoff
* …



--newpage BOA3
--fgcolor green
--boldon
--huge B.O.A.
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
--boldon 
--ulon
Palabra de moda: "Microservices Architecture"
--uloff

---

--exec sh images.sh images/microBuzz.png

---

--exec sh images.sh images/microBuzz2.png


---

--exec sh images.sh images/microbuzz3.png

--newpage BOA4
--fgcolor green
--boldon
--huge B.O.A.
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
--boldon 
--ulon
¿Qué es Buzzword Oriented Architecture?
--uloff





---
--beginoutput
BOA es un estilo de arquitectura que se apoya en la adopción de tecnologías de moda, 
escuchando palabras de la industria que están de moda, sin mucha información y promesas 
de la panacea que solucionará todos tus problemas, incluso los que aun no los tienes.
--endoutput

--boldoff


--newpage BOA5
--fgcolor green
--boldon
--huge B.O.A.
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
--boldon 
--ulon
Buzzword Oriented Architecture no es Nuevo
--uloff
--boldoff

---

* De programación procedural --> programación Orientación Objetos, 

* De Orientación a Objetos --> Component Based Development.

* De Object-oriented analysis and design (OOA/OOD), Model-driven architecture (MDA) --> Domain-Driven Design.

* De Component Based Development --> SOA

* De SOA --> Microservicios


---

--exec sh images.sh images/oldbuzz.png



--newpage Microservicios0
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---

                                          │                                    
                  Monolítico              │        Microservicios              
                                          │                                    
                                          │                                    
                                          │                                    
                                          │                                    
          ┌─────────────────────────────┐ │  ┌───────────────┐┌───────────────┐
          │                             │ │  │     Carga     ││   Streaming   │
          │                             │ │  └───────────────┘└───────────────┘
          │Plataforma de transmisión de │ │  ┌───────────────┐┌───────────────┐
          │            Video            │ │  │    Codecs     ││   Descargas   │
          │                             │ │  └───────────────┘└───────────────┘
          │                             │ │  ┌───────────────┐┌───────────────┐
          │                             │ │  │Recomendaciones││ Suscripciones │
          └─────────────────────────────┘ │  └───────────────┘└───────────────┘
                                          │                                    
                                          │                                    
                                          │                                    

---
* El primero es una unidad grande única: un  Monolítico. 
---

* El segundo es un conjunto de servicios pequeños y específicos. Cada servicio provee una funcionalidad concreta.


--newpage Microservicios1
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
                            │                                                            
              Monolítico    │      Microservicios                                        
                            │                                                            
          ┌────────────┐    │                 ┌────────────┐                             
          │Interfaz de │    │                 │Interfaz de │                             
       ┌──│  Usuario   │    │           ┌─────│  Usuario   │─────────────────────┐       
       │  └────────────┘    │           │     └────────────┘                     │       
       │                    │           ▼            ││                          │       
       │                    │   ┌──────────────┐     ││                          ▼       
       │  ┌────────────┐    │   │Microservicio │┌────┴┴─────────────┐    ┌──────────────┐
       │  │ Lógica de  │    │   └──────────────┘│                   │    │Microservicio │
       └─▶│  Negocio   │──┐ │                   │                   │    └──────────────┘
          └────────────┘  │ │                   ▼                   ▼            │       
                          │ │           ┌──────────────┐    ┌──────────────┐     │       
          ┌────────────┐  │ │           │Microservicio │    │Microservicio │◀────┘       
          │  Acceso a  │  │ │           └──────────────┘    └──────────────┘             
       ┌──│   Datos    │◀─┘ │                   │                   │                    
       │  └────────────┘    │                   │                   │                    
       │                    │              ┌────┘                   └──────┐             
       │     ┌──────┐       │              │  ┌──────┐           ┌──────┐  │             
       │     │ BDD  │       │              │  │ BDD  │           │ BDD  │  │             
       └────▶│      │       │              └─▶│      │           │      │◀─┘             
             └──────┘       │                 └──────┘           └──────┘                
                            │                                                            



--newpage Microservicios2
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
                                           │                                 
                 Monolítico                │    Microservicios               
                                           │                                 
                                           │                                 
             ┌──────────────────────────┐  │                     ┌──────────┐
             │                          │  │   ┌───────────┐     │    Λ     │
             │                    Λ     │  │   │ ┌───────┐ │     │   ╱ ╲    │
             │ ┌───────┐         ╱ ╲    │  │   │ │       │ │     │  ╱   ╲   │
             │ │       │        ╱   ╲   │  │   │ │       │ │     │ ▕     ▏  │
             │ │       │       ▕     ▏  │  │   │ └───────┘ │     │  ╲   ╱   │
             │ └───────┘        ╲   ╱   │  │   └───────────┘     │   ╲ ╱    │
             │                   ╲ ╱    │  │        ┌───────────┐│    V     │
             │         .─────.    V     │  │        │  .─────.  │└──────────┘
             │        ;       :         │  │        │ ;       : │            
             │        :       ;         │  │        │ :       ; │            
             │         ╲     ╱          │  │        │  ╲     ╱  │            
             │          `───'           │  │        │   `───'   │            
             └──────────────────────────┘  │        └───────────┘            
                                           │                                             



--newpage Microservicios3
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Ventajas potenciales:
--uloff
--boldoff
---


* Desarrollo Independiente

* Despliegue independiente

* Escalabilidad independiente

* Reusabilidad


--newpage Microservicios4
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


---
--boldon 
--ulon
Si esto es tan genial, ¿por qué no se ha hecho antes?
--uloff
--boldoff
---

Los problemas no son nuevos:
---

* Integración

* Escalabilidad

* Reusabilidad

* Mantenimiento

* Time to Market

---

--beginoutput
--center ¡Re Inventemos la rueda!
--endoutput



---

--exec sh images.sh images/wheel.png
---

--exec sh images.sh images/microservices-insight-diagram.png




--newpage Microservicios5
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Otras iniciativas a lo largo del tiempo
--uloff
--boldoff
---

* Orientación a Objetos (SOLID, GRASP)

* Desarrollo basado en componentes (Douglas McIlroy, Mass Produced Software Components, 1968).

* Domain-driven design (Evans, 2003).

* SOA, (Gartner, 1996)

* OSGI, 1999



---

--exec sh images.sh images/cbd.png

---

--exec sh images.sh images/solid.png


---

--exec sh images.sh images/soa.png

---

--exec sh images.sh images/ddd.png

---

--exec sh images.sh images/osgi.png



--newpage Microservicios6
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
¿Pero que ha cambiado ahora?
--uloff
--boldoff
---

* Popularidad de la tecnología de contenedores (Docker en particular).

---
* Tecnología de orquestación (como Kubernetes, Mesos, Consul, etc...).



--newpage Microservicios7
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
¿Que retos y problemas tenemos con los microservicios?
--uloff
--boldoff

---
* Mayor complejidad para los desarrolladores

---
* Mayor complejidad para los operaciones

---
* Mayor complejidad para devops

---
* Requiere un nivel de expertcia y conocimiento muy alto

---
* Los sistemas del mundo real están muy mal delimitados



--newpage Microservicios8
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
¿Que retos y problemas tenemos con los microservicios?
--uloff
--boldoff


---
* Se obvian con frecuencia las complejidades de estado

---
* Las complejidades de la comunicación se ignoran a menudo

---
* Versionar se vuelve complicado

---
* Transacciones distribuidas

---
* Los microservicios pueden llegar a ser monolitos disfrazados


--newpage Microservicios9
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
¿Que retos y problemas tenemos con los microservicios?
--uloff
--boldoff


---
                                ┌────────────────┬────────────────┐                            
   ┌───────────────────────┐    │                │                │                            
   │  ¿Tengo problemas de  │ No │                ▼                │No ┌───────────────────────┐
   │ escalabilidad con el  │    │    ┏━━━━━━━━━━━━━━━━━━━━━━━┓    │   │ Tienes experiencia en │
   │  monolítico actual?   │────┘    ┃    Posiblemente no    ┃    └───│    CI/CD, Devops,     │
   │                       │    ┌───▶┃       requieras       ┃◀──┐    │     Contenedores,     │
   └───────────────────────┘    │    ┃    microservicios     ┃██ │    └───────────────────────┘
   ┌───────────────────────┐    │    ┗━━━━━━━━━━━━━━━━━━━━━━━┛██ │ Si ┌───────────────────────┐
   │ ¿Puedes sentar a todo │ Si │      ██████████▲██████████████ │    │¿Se requiere atomicidad│
   │tu equipo en una mesa? │────┘                │               └────│ en las transacciones? │
   │                       │                     │                    │                       │
   └───────────────────────┘                     │                    └───────────────────────┘
   ┌───────────────────────┐                     │                    ┌───────────────────────┐
   │     ¿Dependes de      │ Si                  │               Si   │     ¿La empresa,      │
   │     aplicaciones      │─────────────────────┴────────────────────│ organización funciona │
   │     monolíticas?      │                                          │       en silos?       │
   └───────────────────────┘                                          └───────────────────────┘



--newpage Microservicios10
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
¿Que retos y problemas tenemos con los microservicios?
--uloff
--boldoff


---
                                           ┌──────────────────────┐                           
                                           │Ubicación transparente│                           
                                           └──────────────────────┘                           
                                                       ▲                                      
                                                       │                                      
                                                       │                                      
                     ┌──────────────┐      ┌───────────────────────┐       ┌─────────────────┐
                     │  Repetible   │◀─────│   Un microservicio    │──────▶│ Tamaño correcto │
                     └──────────────┘      └───────────────────────┘█      └─────────────────┘
                                            ███████████│█████████████                         
                                             ┌─────────┴──────────┐                           
                                             │                    │                           
                                             ▼                    ▼                           
                                      ┌─────────────┐       ┌───────────┐                     
                                      │ Resiliente  │       │ Escalable │                     
                                      └─────────────┘       └───────────┘                     


--newpage Microservicios11
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Otras consideraciones con microservicios
--uloff
--boldoff                                            


---
* Desarrollo  en general

---
* Enrutamiento y Descubrimiento

---
* Resiliencia del cliente

---
* Seguridad

---
* Logging y tracing

---
* Compilación y despliegue


--newpage Microservicios12
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Desarrollo  en general
--uloff
--boldoff                 
---
                                      ┌ ─ ─ ─ ─ ─ ─ ─ ─ ┐                                     
                                        ┌─────────────┐                                       
                                      │ │Granularidad │ │                                     
                                        │del servicio │                                       
                                      │ └──────┬──────┘ │                                     
                                               ▼                                              
                                      │ ┌─────────────┐ │                                     
                                        │Protocolos de│                                       
                                      │ │Comunicación │ │                                     
                                        └──────┬──────┘                                       
                                      │        ▼        │                                     
                                        ┌─────────────┐                                       
                                      │ │Diseño de las│ │                                     
                                        │ interfaces  │                                       
                                      │ └──────┬──────┘ │                                     
                                               ▼                                              
                                      │ ┌─────────────┐ │                                     
                                        │ Gestión de  │                                       
                                      │ │configuración│ │                                     
                                        └──────┬──────┘                                       
                                      │        ▼        │                                     
                                        ┌─────────────┐                                       
                                      │ │Procesamiento│ │                                     
                                        │ de eventos  │                                       
                                      │ └─────────────┘ │                                     
                                       ─ ─ ─ ─ ─ ─ ─ ─ ─                                                                 


---
--exec sh images.sh images/desingBooks.png






--newpage Microservicios13
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Enrutamiento y Descubrimiento
--uloff
--boldoff                 
---
                                 ┌─────────────┐        ┌────────────────┐                    
                                 │ Cliente Web │        │Microservicio A │                    
                                 └─────────────┘        └────────────────┘                    
                                        │    ┌──────────────┐    │                            
                                        │    │ Enrutamiento │    │                            
                                        └───▶│ de Servicios │◀───┘                            
                                             └──────────┬───┘                                 
                                                 ▲      │                                     
                                                 │      ▼                                     
                                             ┌───┴──────────┐                                 
                                             │Descubrimiento│                                 
                                  ┌──────────│ de Servicios │────────────┐                    
                                  │          └──────────────┘            │                    
                                  │               ▲     ▲                │                    
                                  │               │     │                │                    
                                  ▼               │     │                ▼                    
                     ┌────────────────────────┐   │     │   ┌────────────────────────┐        
                     │    Microservicio B     │   │     │   │    Microservicio C     │        
                     │      2 instancias      ├───┘     └───┤      2 instancias      │        
                     │ ┌─────────┐┌─────────┐ │             │ ┌─────────┐┌─────────┐ │        
                     │ │         ││         │ │             │ │         ││         │ │        
                     │ │x.x.0.10 ││x.x.0.11 │ │             │ │x.x.1.30 ││x.x.1.41 │ │        
                     │ │         ││         │ │             │ │         ││         │ │        
                     │ └─────────┘└─────────┘ │             │ └─────────┘└─────────┘ │        
                     └────────────────────────┘             └────────────────────────┘   



--newpage Microservicios13
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Enrutamiento y Descubrimiento
--uloff
--boldoff                 


---
* Consul (https://www.consul.io/)  Service Discovery and Configuration Made Easy

---
* Eureka  (https://github.com/Netflix/eureka)  REST based service used for locating services 
                                               for the purpose of load balancing and failover of middle-tier servers.

---
* Zookeeper (https://stackshare.io/zookeeper) Because coordinating distributed systems is a Zoo



--newpage Microservicios14
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Resiliencia del cliente
--uloff
--boldoff                 
---
                                  ┌─────────────┐           ┌────────────────┐                
                                  │ Cliente Web │           │Microservicio A │                
                                  └─────────────┘           └────────────────┘                
                                         │     ┌────────────────┐    │                        
                                         │     │  Balanceo del  │    │                        
                                         └────▶│lado del cliente│◀───┘                        
                                               ├────────────────┤                             
                                               │Circuit breaker │                             
                                               ├────────────────┤                             
                                               │    Fallback    │                             
                                               ├────────────────┤                             
                                               │    Bulkhead    │                             
                                               ├────────────────┤                             
                                     ┌─────────┘     ▲     ▲    └───────────┐                 
                                     │               │     │                │                 
                                     ▼               │     │                ▼                 
                        ┌────────────────────────┐   │     │   ┌────────────────────────┐     
                        │    Microservicio B     │   │     │   │    Microservicio C     │     
                        │      2 instancias      ├───┘     └───┤      2 instancias      │     
                        │ ┌─────────┐┌─────────┐ │             │ ┌─────────┐┌─────────┐ │     
                        │ │         ││         │ │             │ │         ││         │ │     
                        │ │x.x.0.10 ││x.x.0.11 │ │             │ │x.x.1.30 ││x.x.1.41 │ │     
                        │ │         ││         │ │             │ │         ││         │ │     
                        │ └─────────┘└─────────┘ │             │ └─────────┘└─────────┘ │     
                        └────────────────────────┘             └────────────────────────┘    



--newpage Microservicios14
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Resiliencia del cliente
--uloff
--boldoff                 


---
* Resilience4j (https://github.com/resilience4j/resilience4j) Fault tolerance library designed for Java8 and functional programming

---
* Hystrix (https://github.com/Netflix/Hystrix) Latency and Fault Tolerance for Distributed Systems

---
--exec sh images.sh images/resilence.png

--newpage Microservicios16
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Seguridad
--uloff
--boldoff                 



---
* Autenticación

---
* Control de acceso y autorización

---
* Asegurar APIs y aplicaciones

---
* No confiar en datos externos, validar / codificar / sanitizar

---
* Serialización / Deserialización segura

---
* Compartir "Secrets" de forma segura



--newpage Microservicios16
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Seguridad 
--uloff
--boldoff                 


--boldon 
---
Malas Ideas:
--boldoff  

---
* Credenciales en el código fuente

---
* Credenciales en Dockerfiles

---
* Usar variables de entorno para pasar credenciales



--newpage Microservicios16
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Seguridad 
--uloff
--boldoff                 


--boldon 
---
Opciones:
--boldoff  

---
* Kubernetes -> native secrets management API
  http://kubernetes.io/docs/user-guide/secrets

---
* Docker/Swarm
  Secret Management https://github.com/docker/docker/pull/27794

---
* DC/OS - Secrets API
  https://docs.mesosphere.com/1.8/administration/secrets/secrets-api/




--newpage Microservicios17
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Logging y tracing
--uloff
--boldoff                 
--- 

   Log Correlation ────┐                                                                      
                       ▼                                                                      
                ┌────────────┐ ┌────────────┐ ┌────────────┐ ┌────────────┐  ┌────────────┐   
                │ Servicio A │ │ Servicio A │ │ Servicio B │ │ Servicio B │  │ Servicio C │   
                └────────────┘ └────────────┘ └────────────┘ └────────────┘  └────────────┘    
                       │              │              │              │               │         
                       └──────────────┴──────────────┼──────────────┴───────────────┘         
                                                     │                                        
                                               .─────▼─────.                                  
                                              (             )                                 
                                              ╲`───────────'╱                                 
                                               ╲           ╱                                  
                                                ╲         ╱◀──────────── Log Aggregation      
                                                 ╲       ╱                                    
                                                  ╲     ╱                                       
                          Tracing                  ╲   ╱                                        
                                                     │  
                                                     ▼                                        
                      ┌────────────┐              .─────.                                     
                      │┌──────────┐│◀────────────│.─────.│                                    
                      ││          ││             │.─────.│◀─────────── Central Data Store     
                      │└──────────┘│             │.─────.│                                    
                      └──┬───────┬─┘────────────▶│       │                                    
                         └───────┘                `─────'                              



--newpage Microservicios17
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Logging y tracing
--uloff
--boldoff                 



---
* Cloud Sleuth (https://cloud.spring.io/spring-cloud-sleuth/) Spring Cloud Sleuth implements a distributed tracing solution for Spring Cloud

---
* Zipkin (https://zipkin.io) Distributed tracing system

---
* ELK Stack (https://www.elastic.co/elk-stack) Elasticsearch, Logstash, and Kibana


--newpage Microservicios18
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Compilación y despliegue
--uloff
--boldoff                 



---                                                                                              
* Pipelines

---
* Infraestructura como código

---
* Servidores inmutables
 



--newpage Microservicios18
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Compilación y despliegue
--uloff
--boldoff       

---          
  ┌───────────┬───────────────────────┬───────────────────────┬────────────────────┬──────────────────────┐ 
  │Compilación│        Pruebas        │Empaquetamiento/desplie│Creación de Imagenes│Commit repo a Registry│ 
  │           │ unitarias/integración │   gue de artefactos   │                    │                      │ 
  └───────────┴───────────────────────┴───────────────────────┴────────────────────┴──────────────────────┘ 
                             ┌────────────────────────────────────────────────┐                              
                             │              prueba de plataforma              │                              
                             └────────────────────────────────────────────────┘                              
     Desarrollo              ┌────────────────────────────────────────────────┐                              
                             │ Despliegue imagen / nuevo servidor desplegado  │                              
                             └────────────────────────────────────────────────┘                              
 ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ 
                             ┌────────────────────────────────────────────────┐                              
                             │              prueba de plataforma              │                              
                             └────────────────────────────────────────────────┘                              
      Pruebas                ┌────────────────────────────────────────────────┐                              
                             │ Despliegue imagen / nuevo servidor desplegado  │                              
                             └────────────────────────────────────────────────┘                              
 ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ ─ 
                             ┌────────────────────────────────────────────────┐                              
                             │              prueba de plataforma              │                              
                             └────────────────────────────────────────────────┘                              
     Producción              ┌────────────────────────────────────────────────┐                              
                             │ Despliegue imagen / nuevo servidor desplegado  │                              
                             └────────────────────────────────────────────────┘                              



--newpage Microservicios19
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Frameworks de Java populares
--uloff
--boldoff                 



---
* Spring Cloud (http://projects.spring.io/spring-cloud/)

---
* Dropwizard (https://www.dropwizard.io/1.3.2/docs/)

---
* WildFly Swarm (http://wildfly-swarm.io)

---
* Istio (https://istio.io)

---
* Karaf (https://karaf.apache.org)

---
* Netflix OSS (https://netflix.github.io)

---
* Docker (https://www.docker.com)

---
* Kubernetes (https://kubernetes.io)



--newpage Microservicios19
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
Frameworks  y herramientas Sugeridas 
--uloff
--boldoff                 



---
* Netflix Eureka: para  descubrimiento de servicios

---
* Consul: para guardar configuraciones, parámetros

---
* Zuul:  para ruteo inteligente y programable

---
* Netflix Ribbon: para balanceo de carga del lado del cliente

---
* Zipkin: para trazabilidad

---
* Turbine: para agregación de métricas 

---
* Netflix Feign: para implementar Clientes REST Declarativos

---
* Hystrix: circuit breaker

---
* RabbitMQ: broker de mensajería

--newpage Microservicios20
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
Antecedentes:
--boldoff     

---
* Imaginemos un banco grande que ya tiene sus sistemas monolíticos funcionando mal o bien.

---
* Los días picos, como quincenas, fin de mes y feriados siempre tienen problemas especialmente en la banca en línea.

---
* Según las estadísticas, las funcionalidades de consulta de autenticación, posición consolidada, transferencias son las que más peticiones tienen en horas pico.

---
* La banca en línea es un war que tiene todas las funcionalidades embebidas, más de 12 años código espagueti.

---
* El banco funciona en silos, las áreas de desarrollo, release y operaciones no trabajan en equipo, utilizan un proceso manual y en cascada para la puesta en producción.

---
* El core bancario es un Monolítico escrito en Cobol que funciona en un MainFrame

---
* El banco también escucho de los beneficios de usar microservicios y quiere subirse al tren  de la modernidad.


--newpage Microservicios20
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué problemas vemos?
--boldoff     


---
* No tienen experiencia en CI/CD, DevOps, Contenedores

---
* Las transferencias requieren atomicidad 

---
* Tiene dependencias de aplicaciones monolíticas



---
--beginoutput
¿Es prudente hacer microservicios en este escenario?
--endoutput



--newpage Microservicios20
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     


---
Empezar con pasos pequeños:  

---
* La aplicación no usa un building tool -->  Maven o Gradle

---
* No versionamos los artefactos --> maven release plugin,  Semantic Versioning https://semver.org

---
* No realizamos despliegue de los artefactos compilados --> Nexus, Artifactory

---
* No utilizamos herramientas de Integración y Despliegue continuo: Jenkins

---
* No realizamos pruebas unitarias --> Empecemos con realizar pruebas a los issues nuevos.

---
* No realizamos funcionales automáticas --> Selenium, Cucumber.




--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     



---

Siguientes pasos:

---
* Crear una imagen de Docker del monolítico.

---
* Empezar a utilizar en ambientes de desarrollo y pruebas la imagen

---
* Desplegar la imagen de Docker a un Docker Registry.

---
* Si todo va bien, podemos empezar a realizar en producción una mezcla de instancias de servidores y contenedores.

---
* Si todo va bien, orquestemos con kubernetes


--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff 

---  
Esto es lo que queremos:


                                          │                                    
                  Monolítico              │        Microservicios              
         ┌─────────────────────────────┐  │                                    
         │      ┌───────────────┐      │  │   ┌─────────────────────┐    ┌────┐
         │      │ autenticación │      │  │   │    autenticación    ├───▶│BDD │
         │      └───────────────┘      │  │   └─────────────────────┘    └────┘
         │   ┌─────────────────────┐   │  │   ┌─────────────────────┐    ┌────┐
         │   │posición consolidada │   │  │   │posición consolidada ├───▶│BDD │
         │   └─────────────────────┘   │  │   └─────────────────────┘    └────┘
         │      ┌───────────────┐      │  │   ┌─────────────────────┐    ┌────┐
         │      │transferencias │      │  │   │   transferencias    ├───▶│BDD │
         │      └───────────────┘      │  │   └─────────────────────┘    └────┘
         └──────────────┬──────────────┘  │                                    
                        │                 │                                    
                        ▼                                                      
                      ┌────┐                                                   
                      │BDD │                                                   
                      └────┘                                                               





--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Separamos la interfaz de usuario, debería verse exactamente igual a la original:                                                             

              ┌─────────────────────────────┐                                  
              │     Interfaz de Usuario     │                                  
              └──────────────┬──────────────┘                                  
                             │   Rest                                              
                             ▼                                                 
              ┌─────────────────────────────┐                                  
              │      ┌───────────────┐      │                                  
              │      │ autenticación │      │                                  
              │      └───────────────┘      │                                  
              │   ┌─────────────────────┐   │                                  
              │   │posición consolidada │   │     Es el mismo Monolítico  
              │   └─────────────────────┘   │     anterior sin modificar nada                            
              │      ┌───────────────┐      │                                  
              │      │transferencias │      │                                  
              │      └───────────────┘      │                                  
              └──────────────┬──────────────┘                                  
                             │                                                 
                             ▼                                                 
                           ┌────┐                                              
                           │BDD │                                              
                           └────┘                                           

--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Primer paso a producción:

                               ┌──────────────────────┐                        
                               │ Balanceador de Carga │                        
                               └───────────┬──────────┘                        
                                           │                                   
                ┌──────────────────────────┤                                   
                │                          │                                   
                ▼                          ▼                                   
 ┌─────────────────────────────┐ ┌─────────────────────────────┐               
 │     Interfaz de Usuario     │ │      ┌───────────────┐      │               
 └──────────────────────┬──────┘ │      │ autenticación │      │               
                        │        │      └───────────────┘      │               
                        │        │   ┌─────────────────────┐   │     Es el mismo Monolítico             
                        └───────▶│   │posición consolidada │   │     anterior sin modificar nada          
                 Rest            │   └─────────────────────┘   │               
                                 │      ┌───────────────┐      │               
                                 │      │transferencias │      │               
                                 │      └───────────────┘      │               
                                 └──────────────┬──────────────┘               
                                                │                              
                                                ▼                              
                                              ┌────┐                           
                                              │BDD │                           
                                              └────┘                          


--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Segundo paso a producción, quitamos la vieja Interfaz de Usuario:

                                       ┌─────────────────────────────┐         
                                       │     Interfaz de Usuario     │         
                                       └─────────────┬───────────────┘         
                                                     ▼                         
                                       ┌─────────────────────────────┐         
                                       │      ┌───────────────┐      │         
                                       │      │ autenticación │      │         
                                       │      └───────────────┘      │         
                                       │   ┌─────────────────────┐   │         
                                       │   │posición consolidada │   │         
                                       │   └─────────────────────┘   │         
                                       │      ┌───────────────┐      │         
                                       │      │transferencias │      │         
                                       │      └───────────────┘      │         
                                       └──────────────┬──────────────┘         
                                                      ▼                        
                                                    ┌────┐                     
                                                    │BDD │                     
                                                    └────┘                   

--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Creamos un nuevo servicio independiente de posición consolidada

                                         ┌─────────────────────────────┐                           
                                         │     Interfaz de Usuario     │                           
                                         └─────────────┬───────────────┘                                  
                                                       ▼                                           
                                         ┌─────────────────────────────┐                           
                                         │      ┌───────────────┐      │                           
                                         │      │ autenticación │      │                           
                                         │      └───────────────┘      │                           
                                         │   ┌─────────────────────┐   │    ┌─────────────────────┐
                                         │   │posición consolidada │   │    │posición consolidada │
                                         │   └─────────────────────┘   │    └──────────┬──────────┘
                                         │      ┌───────────────┐      │               │           
                                         │      │transferencias │      │               │           
                                         │      └───────────────┘      │               │           
                                         └──────────────┬──────────────┘               │             
                                                        ▼                              ▼           
                                                      ┌────┐                         ┌────┐        
                                                      │BDD │                         │BDD │        
                                                      └────┘                         └────┘        

--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Creamos un nuevo servicio independiente de posición consolidada

                                         ┌─────────────────────────────┐                           
                                         │     Interfaz de Usuario     │                           
                                         └─────────────┬───────────────┘                                 
                                                       ▼                                           
                                         ┌─────────────────────────────┐                           
                                         │      ┌───────────────┐      │    ┌─────────────────────┐
                                         │      │ autenticación │      │    │                     │
                                         │      └───────────────┘      │    │posición consolidada │
                                         │   ┌─────────────────────┐   │    │      REST API       │
                                         │   │posición consolidada │   │    │                     │
                                         │   └─────────────────────┘   │    └──────────┬──────────┘
                                         │      ┌───────────────┐      │               │           
                                         │      │transferencias │      │               │           
                                         │      └───────────────┘      │               │           
                                         └──────────────┬──────────────┘               │           
                                                        ▼                              ▼           
                                                      ┌────┐                         ┌────┐        
                                                      │BDD │◀────────────────────────│BDD │        
                                                      └────┘      solo lectura       └────┘        
                                                                                       

--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Tercer paso a producción, servicio independiente de posición consolidada (dark launch)

                          ┌─────────────────────────────┐                                           
                          │     Interfaz de Usuario     │                                           
                          └──────────────┬──────────────┘                                           
         V1           ┌──────────────────┴──────────────┐        V2                                 
                      ▼                Rest             ▼                                           
       ┌─────────────────────────────┐   ┌─────────────────────────────┐      ┌─────────────────────┐
       │      ┌───────────────┐      │   │    ┌───────────────┐        │      │                     │
       │      │ autenticación │      │   │    │ autenticación │        │ Rest │posición consolidada │
       │      └───────────────┘      │   │    └───────────────┘        ├ ─ ─ ▶│      REST API       │
       │   ┌─────────────────────┐   │   │                             │      │                     │
       │   │posición consolidada │   │   │                             │      └──────────┬──────────┘
       │   └─────────────────────┘   │   │                             │                 │           
       │      ┌───────────────┐      │   │    ┌───────────────┐        │                 │           
       │      │transferencias │      │   │    │transferencias │        │                 │           
       │      └───────────────┘      │   │    └───────────────┘        │                 │           
       └──────────────┬──────────────┘   └────────────┬────────────────┘                 │           
                      └──────────────┬────────────────┘                                  │           
                                     ▼                            solo lectura           ▼           
                                   ┌────┐                                             ┌────┐        
                                   │BDD │◀────────────────────────────────────────────│BDD │        
                                   └────┘                                             └────┘        

--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Podemos usar un Gateway para un mejor control sobre las peticiones y seguimos validando
                        ┌─────────────────────────────┐                                             
                        │     Interfaz de Usuario     │                                             
                        └─────────────┬───────────────┘                                             
                                      │  ▲                                                          
                                      ▼  │                                                          
                        ┌────────────────┴────────────┐                                             
                        │           Gateway           │                                             
                        └──────────────┬──────────────┘                                             
       V1           ┌──────────────────┴──────────────┐        V2                                   
                    ▼                 Rest            ▼                                             
     ┌─────────────────────────────┐   ┌─────────────────────────────┐      ┌─────────────────────┐  
     │      ┌───────────────┐      │   │    ┌───────────────┐        │      │                     │  
     │      │ autenticación │      │   │    │ autenticación │        │ Rest │posición consolidada │  
     │      └───────────────┘      │   │    └───────────────┘        ├ ─ ─▶ │      REST API       │  
     │   ┌─────────────────────┐   │   │                             │      │                     │  
     │   │posición consolidada │   │   │                             │      └──────────┬──────────┘  
     │   └─────────────────────┘   │   │                             │                 │             
     │      ┌───────────────┐      │   │    ┌───────────────┐        │                 │             
     │      │transferencias │      │   │    │transferencias │        │                 │             
     │      └───────────────┘      │   │    └───────────────┘        │                 │             
     └──────────────┬──────────────┘   └────────────┬────────────────┘                 │             
                    │                               │                                  │             
                    └──────────────┬────────────────┘                                  │             
                                   │                                                   │             
                                   │                                                   │             
                                   ▼                            solo lectura           ▼             
                                 ┌────┐                                             ┌────┐          
                                 │BDD │◀────────────────────────────────────────────│BDD │          
                                 └────┘                                             └────┘          

--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Si todo va bien,  damos de baja a la versión 1 del backend

                           ┌─────────────────────────────┐                                     
                           │     Interfaz de Usuario     │                                     
                           └─────────────┬───────────────┘                                     
                                         │  ▲                                                  
                                         ▼  │                                                  
                           ┌────────────────┴────────────┐                                     
                           │           Gateway           │                                     
                           └──────────────┬──────────────┘                                     
                                          ▼   Rest                                                 
                           ┌─────────────────────────────┐              ┌─────────────────────┐
                       V2  │      ┌───────────────┐      │              │                     │
                           │      │ autenticación │      │     Rest     │posición consolidada │
                           │      └───────────────┘      │─ ─ ─ ─ ─ ─ ─▶│      REST API       │
                           │                             │              │                     │
                           │                             │              └──────────┬──────────┘
                           │      ┌───────────────┐      │                         │           
                           │      │transferencias │      │                         │           
                           │      └───────────────┘      │                         │           
                           └──────────────┬──────────────┘                         │           
                                          │                                        │           
                                          ▼                  solo lectura          ▼           
                                        ┌────┐                                   ┌────┐        
                                        │BDD │◀──────────────────────────────────│BDD │        
                                        └────┘                                   └────┘        


--newpage Microservicios21
--fgcolor green
--boldon
--huge Microservicios
--ulon
--horline
--boldoff
--uloff
--boldon

--fgcolor white


--boldon 
--ulon
"Un caso práctico"
--uloff
--boldoff

--boldon 
¿Qué podemos hacer?
--boldoff     

---
Si todo vsale bien, buscamos una forma de desconectar las bases de datos

                   ┌─────────────────────────────┐                               
                   │     Interfaz de Usuario     │                               
                   └─────────────┬───────────────┘                               
                                 │  ▲                                            
                                 ▼  │                                            
                   ┌────────────────┴────────────┐                               
                   │           Gateway           │                               
                   └──────────────┬──────────────┘                               
                                  ▼   Rest                                           
                   ┌─────────────────────────────┐        ┌─────────────────────┐
               V2  │      ┌───────────────┐      │        │                     │
                   │      │ autenticación │      │ Rest   │posición consolidada │
                   │      └───────────────┘      ├───────▶│      REST API       │
                   │                             │        └──────────┬──────────┘
                   │      ┌───────────────┐      │                   │           
                   │      │transferencias │      │                   │           
                   │      └───────────────┘      │                   │           
                   └──────────────┬──────────────┘                   │                
                                  ▼                                  ▼           
                                ┌────┐                             ┌────┐        
                                │BDD │                             │BDD │        
                                └────┘                             └────┘        