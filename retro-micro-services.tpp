
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


--newpage Microservicios15
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
* No confiar en datos externos ... validar / codificar / sanitizar

---
* Serialización / Deserialización segura

---
* Compartir "Secrets" de forma segura



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
"Un Caso Práctico"
--uloff
--boldoff                 



---                                                                                              
