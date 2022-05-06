cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HiVar Hiiiii)
set(ByeVar Byee)
message("The value of myVar = ${HiVar}")
message("The value of myVar = ${byeVar}") # will print blank. Variable Names are case sensetive.
message("The value of myVar = ${ByeVar}") # 

if(yes) # YES,yes,true,1 are same. case insensetive.0
    message("Inside if blocak.")
endif()

if(NOT no) # YES,yes,true,1 are same. NOT is case sestive
    message("2 Inside if blocak.")
endif()

if(YES AND YES) 
    message("3 Inside if blocak.")
endif()


if(NO OR YES) # YES,yes,true,1 are same. NOT is case sestive.
    message("4 Inside if blocak.")
endif()
 
if(10 LESS 5)
    message("5 is LESS 5.")
endif()

#Numeric comparision.
    #LESS 
    #LESS_EQUAL
    #GREATER
    #GREATER_EQUAL
    #EQUAL

#String
    #STRLESS 
    #STRGREATER 
    #STREQUAL 
    #STRLESS_EQUAL
    #STRGREATER_EQUAL 
 
#Vesrion Number
    #VERSION_LESS
    #VERSION_GREATER
    #VERSION_EQUAL
    #VERSION_LESS_EQUAL
    #VERSION_GREATER_EQUAL

if(1.2 VERSION_EQUAL 1.2.0)
    message("1*")
endif()

if(1.2 VERSION_LESS 1.2.3)
    message("2*")
endif()

if(1.2.3 VERSION_GREATER 1.2 )
    message("3*")
endif()

if(2.0.1 VERSION_GREATER 1.9.7)
    message("4*")
endif()

if(1.8.2 VERSION_LESS 2 )
    message("5*")               
endif()

if(WIN32) # value is one on win32
    set(platformImpl source_win.cpp)
else()
    set(platformImpl source_generic.cpp)
endif()
message("platform ${platformImpl} and ${WIN32}")

if(MSVC)
    set(platformImpl source_msvc.cpp)
else()
    set(platformImpl source_generic.cpp)
endif()


if(APPLE)
    # Some Xcode-specific settings here...
else()
    # Things for other platforms here...
endif()