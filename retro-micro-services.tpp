
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
¿Cuál es problema con los microservicios?
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
¿Cuál es problema con los microservicios?
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
¿Cuál es problema con los microservicios?
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
