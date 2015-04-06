# j2objc-inner-classes
A test project for j2objc for testing inner classes and inner types

Execute ``j2objc-script.sh`` to see the following output: 

```
$ ./j2objc-script.sh 
translating src/main/java/com/example/SomeClassX.java
translating jar:file:libSrc/json-20140107-sources.jar!org/json/JSONObject.java
warning: could not find source path for org.json.JSONObject.Null
translating jar:file:libSrc/json-20140107-sources.jar!org/json/JSONTokener.java
translating jar:file:libSrc/json-20140107-sources.jar!org/json/JSONArray.java
translating jar:file:libSrc/json-20140107-sources.jar!org/json/JSONException.java
translating jar:file:libSrc/json-20140107-sources.jar!org/json/JSONString.java
Translated 6 files: 0 errors, 1 warnings
Translated 34 methods as functions
```

Note that the inner class ``JSONObject.Null`` raises a warning.


Note
===

I know that ``org.json.*`` is part of the translated classes in j2objc, but it is used only to demonstrate the problem with inner classes which are not translated.
