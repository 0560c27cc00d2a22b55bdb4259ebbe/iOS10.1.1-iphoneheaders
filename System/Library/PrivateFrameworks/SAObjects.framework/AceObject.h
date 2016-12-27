/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAObjects-Structs.h>
#import <libobjc.A.dylib/AceObject.h>

@protocol AceObject <NSObject,NSCopying,NSMutableCopying,NSSecureCoding>
@required
-(id)init;
-(id)initWithDictionary:(id)arg1;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1;
-(id)mutableCopyWithZone:(NSZone*)arg1;
-(id)properties;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)initWithDictionary:(id)arg1 context:(id)arg2;

@end


@class NSNumber, NSString, NSData, NSMutableDictionary;

@interface AceObject : NSObject <AceObject> {

	NSNumber* _deserializationDuration;
	NSString* _aceId;
	NSString* _refId;
	NSData* _plistData;
	NSMutableDictionary* _dict;

}

@property (nonatomic,readonly) NSData * plistData;                      //@synthesize plistData=_plistData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,copy) NSString * aceId;                            //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                            //@synthesize refId=_refId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)_newAceObjectWithMutableDictionary:(id)arg1 ;
+(id)_filteredDictionaryForKeySet:(CFSetRef)arg1 plistData:(id)arg2 ;
+(id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)dictionaryArrayWithAceObjectArray:(id)arg1 ;
+(id)dictionaryWithAceObjectDictionary:(id)arg1 ;
+(id)aceObjectWithPlistData:(id)arg1 ;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)_afui_usefulUserResultType;
-(id)af_dialogIdentifier;
-(BOOL)af_isUtterance;
-(BOOL)af_isUserUtterance;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_serializedData;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)properties;
-(id)fullDescription;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setRefId:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 ;
-(id)_initWithMutableDictionary:(id)arg1 ;
-(void)_deserializeFromPlistData;
-(id)topLevelPropertyForKey:(id)arg1 ;
-(id)_dict;
-(void)setTopLevelProperty:(id)arg1 forKey:(id)arg2 ;
-(id)forceEagerDeserialization;
-(id)_descriptionHint;
-(void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5 ;
-(id)propertyForKeyWithoutDeserializing:(id)arg1 ;
-(BOOL)hasArrayForPropertyForKey:(id)arg1 ;
-(id)deserializationDuration;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSData *)plistData;
-(NSMutableDictionary *)dict;
-(NSString *)aceId;
@end

