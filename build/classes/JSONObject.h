//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libSrc/json-20140107-sources.jar!org/json/JSONObject.java
//

#ifndef _OrgJsonJSONObject_H_
#define _OrgJsonJSONObject_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaIoWriter;
@class JavaUtilLocale;
@class OrgJsonJSONArray;
@class OrgJsonJSONTokener;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface OrgJsonJSONObject : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgJsonJSONObject:(OrgJsonJSONObject *)jo
                        withNSStringArray:(IOSObjectArray *)names;

- (instancetype)initWithOrgJsonJSONTokener:(OrgJsonJSONTokener *)x;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (instancetype)initWithId:(id)bean;

- (instancetype)initWithId:(id)object
         withNSStringArray:(IOSObjectArray *)names;

- (instancetype)initWithNSString:(NSString *)source;

- (instancetype)initWithNSString:(NSString *)baseName
              withJavaUtilLocale:(JavaUtilLocale *)locale;

- (OrgJsonJSONObject *)accumulateWithNSString:(NSString *)key
                                       withId:(id)value;

- (OrgJsonJSONObject *)appendWithNSString:(NSString *)key
                                   withId:(id)value;

+ (NSString *)doubleToStringWithDouble:(jdouble)d;

- (id)getWithNSString:(NSString *)key;

- (jboolean)getBooleanWithNSString:(NSString *)key;

- (jdouble)getDoubleWithNSString:(NSString *)key;

- (jint)getIntWithNSString:(NSString *)key;

- (OrgJsonJSONArray *)getJSONArrayWithNSString:(NSString *)key;

- (OrgJsonJSONObject *)getJSONObjectWithNSString:(NSString *)key;

- (jlong)getLongWithNSString:(NSString *)key;

+ (IOSObjectArray *)getNamesWithOrgJsonJSONObject:(OrgJsonJSONObject *)jo;

+ (IOSObjectArray *)getNamesWithId:(id)object;

- (NSString *)getStringWithNSString:(NSString *)key;

- (jboolean)hasWithNSString:(NSString *)key;

- (OrgJsonJSONObject *)incrementWithNSString:(NSString *)key;

- (jboolean)isNullWithNSString:(NSString *)key;

- (id<JavaUtilIterator>)keys;

- (id<JavaUtilSet>)keySet;

- (jint)length;

- (OrgJsonJSONArray *)names;

+ (NSString *)numberToStringWithNSNumber:(NSNumber *)number;

- (id)optWithNSString:(NSString *)key;

- (jboolean)optBooleanWithNSString:(NSString *)key;

- (jboolean)optBooleanWithNSString:(NSString *)key
                       withBoolean:(jboolean)defaultValue;

- (jdouble)optDoubleWithNSString:(NSString *)key;

- (jdouble)optDoubleWithNSString:(NSString *)key
                      withDouble:(jdouble)defaultValue;

- (jint)optIntWithNSString:(NSString *)key;

- (jint)optIntWithNSString:(NSString *)key
                   withInt:(jint)defaultValue;

- (OrgJsonJSONArray *)optJSONArrayWithNSString:(NSString *)key;

- (OrgJsonJSONObject *)optJSONObjectWithNSString:(NSString *)key;

- (jlong)optLongWithNSString:(NSString *)key;

- (jlong)optLongWithNSString:(NSString *)key
                    withLong:(jlong)defaultValue;

- (NSString *)optStringWithNSString:(NSString *)key;

- (NSString *)optStringWithNSString:(NSString *)key
                       withNSString:(NSString *)defaultValue;

- (OrgJsonJSONObject *)putWithNSString:(NSString *)key
                           withBoolean:(jboolean)value;

- (OrgJsonJSONObject *)putWithNSString:(NSString *)key
                withJavaUtilCollection:(id<JavaUtilCollection>)value;

- (OrgJsonJSONObject *)putWithNSString:(NSString *)key
                            withDouble:(jdouble)value;

- (OrgJsonJSONObject *)putWithNSString:(NSString *)key
                               withInt:(jint)value;

- (OrgJsonJSONObject *)putWithNSString:(NSString *)key
                              withLong:(jlong)value;

- (OrgJsonJSONObject *)putWithNSString:(NSString *)key
                       withJavaUtilMap:(id<JavaUtilMap>)value;

- (OrgJsonJSONObject *)putWithNSString:(NSString *)key
                                withId:(id)value;

- (OrgJsonJSONObject *)putOnceWithNSString:(NSString *)key
                                    withId:(id)value;

- (OrgJsonJSONObject *)putOptWithNSString:(NSString *)key
                                   withId:(id)value;

+ (NSString *)quoteWithNSString:(NSString *)string;

+ (JavaIoWriter *)quoteWithNSString:(NSString *)string
                   withJavaIoWriter:(JavaIoWriter *)w;

- (id)removeWithNSString:(NSString *)key;

+ (id)stringToValueWithNSString:(NSString *)string;

+ (void)testValidityWithId:(id)o;

- (OrgJsonJSONArray *)toJSONArrayWithOrgJsonJSONArray:(OrgJsonJSONArray *)names;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)indentFactor;

+ (NSString *)valueToStringWithId:(id)value;

+ (id)wrapWithId:(id)object;

- (JavaIoWriter *)writeWithJavaIoWriter:(JavaIoWriter *)writer;

#pragma mark Package-Private

+ (void)indentWithJavaIoWriter:(JavaIoWriter *)writer
                       withInt:(jint)indent;

- (JavaIoWriter *)writeWithJavaIoWriter:(JavaIoWriter *)writer
                                withInt:(jint)indentFactor
                                withInt:(jint)indent;

+ (JavaIoWriter *)writeValueWithJavaIoWriter:(JavaIoWriter *)writer
                                      withId:(id)value
                                     withInt:(jint)indentFactor
                                     withInt:(jint)indent;

@end

J2OBJC_STATIC_INIT(OrgJsonJSONObject)

FOUNDATION_EXPORT id OrgJsonJSONObject_NULL__;
J2OBJC_STATIC_FIELD_GETTER(OrgJsonJSONObject, NULL__, id)

FOUNDATION_EXPORT void OrgJsonJSONObject_init(OrgJsonJSONObject *self);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithOrgJsonJSONObject_withNSStringArray_(OrgJsonJSONObject *self, OrgJsonJSONObject *jo, IOSObjectArray *names);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithOrgJsonJSONObject_withNSStringArray_(OrgJsonJSONObject *jo, IOSObjectArray *names) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithOrgJsonJSONTokener_(OrgJsonJSONObject *self, OrgJsonJSONTokener *x);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithOrgJsonJSONTokener_(OrgJsonJSONTokener *x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithJavaUtilMap_(OrgJsonJSONObject *self, id<JavaUtilMap> map);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithJavaUtilMap_(id<JavaUtilMap> map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithId_(OrgJsonJSONObject *self, id bean);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithId_(id bean) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithId_withNSStringArray_(OrgJsonJSONObject *self, id object, IOSObjectArray *names);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithId_withNSStringArray_(id object, IOSObjectArray *names) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithNSString_(OrgJsonJSONObject *self, NSString *source);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithNSString_(NSString *source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgJsonJSONObject_initWithNSString_withJavaUtilLocale_(OrgJsonJSONObject *self, NSString *baseName, JavaUtilLocale *locale);

FOUNDATION_EXPORT OrgJsonJSONObject *new_OrgJsonJSONObject_initWithNSString_withJavaUtilLocale_(NSString *baseName, JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *OrgJsonJSONObject_doubleToStringWithDouble_(jdouble d);

FOUNDATION_EXPORT IOSObjectArray *OrgJsonJSONObject_getNamesWithOrgJsonJSONObject_(OrgJsonJSONObject *jo);

FOUNDATION_EXPORT IOSObjectArray *OrgJsonJSONObject_getNamesWithId_(id object);

FOUNDATION_EXPORT NSString *OrgJsonJSONObject_numberToStringWithNSNumber_(NSNumber *number);

FOUNDATION_EXPORT NSString *OrgJsonJSONObject_quoteWithNSString_(NSString *string);

FOUNDATION_EXPORT JavaIoWriter *OrgJsonJSONObject_quoteWithNSString_withJavaIoWriter_(NSString *string, JavaIoWriter *w);

FOUNDATION_EXPORT id OrgJsonJSONObject_stringToValueWithNSString_(NSString *string);

FOUNDATION_EXPORT void OrgJsonJSONObject_testValidityWithId_(id o);

FOUNDATION_EXPORT NSString *OrgJsonJSONObject_valueToStringWithId_(id value);

FOUNDATION_EXPORT id OrgJsonJSONObject_wrapWithId_(id object);

FOUNDATION_EXPORT JavaIoWriter *OrgJsonJSONObject_writeValueWithJavaIoWriter_withId_withInt_withInt_(JavaIoWriter *writer, id value, jint indentFactor, jint indent);

FOUNDATION_EXPORT void OrgJsonJSONObject_indentWithJavaIoWriter_withInt_(JavaIoWriter *writer, jint indent);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONObject)

@interface OrgJsonJSONObject_Null : NSObject

#pragma mark Public

- (jboolean)isEqual:(id)object;

- (NSString *)description;

#pragma mark Protected

- (id)clone;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsonJSONObject_Null)

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONObject_Null)

#endif // _OrgJsonJSONObject_H_