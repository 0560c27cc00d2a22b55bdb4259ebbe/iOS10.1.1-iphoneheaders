/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL, NSDictionary;

@interface NSPersistentStoreDescription : NSObject <NSCopying> {

	NSMutableDictionary* _options;
	NSString* _type;
	NSString* _configuration;
	NSURL* _url;

}

@property (copy) NSString * type;                                              //@synthesize type=_type - In the implementation block
@property (copy) NSString * configuration;                                     //@synthesize configuration=_configuration - In the implementation block
@property (copy) NSURL * URL;                                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options; 
@property (getter=isReadOnly) BOOL readOnly; 
@property (assign) double timeout; 
@property (nonatomic,copy,readonly) NSDictionary * sqlitePragmas; 
@property (assign) BOOL shouldAddStoreAsynchronously; 
@property (assign) BOOL shouldMigrateStoreAutomatically; 
@property (assign) BOOL shouldInferMappingModelAutomatically; 
+(id)persistentStoreDescriptionWithURL:(id)arg1 ;
-(BOOL)shouldAddStoreAsynchronously;
-(BOOL)shouldInvokeCompletionHandlerConcurrently;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)sqlitePragmas;
-(void)setValue:(id)arg1 forPragmaNamed:(id)arg2 ;
-(void)setShouldAddStoreAsynchronously:(BOOL)arg1 ;
-(void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)arg1 ;
-(BOOL)shouldMigrateStoreAutomatically;
-(void)setShouldMigrateStoreAutomatically:(BOOL)arg1 ;
-(BOOL)shouldInferMappingModelAutomatically;
-(void)setShouldInferMappingModelAutomatically:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSDictionary *)options;
-(void)setConfiguration:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)configuration;
-(void)setTimeout:(double)arg1 ;
-(BOOL)isReadOnly;
-(double)timeout;
-(void)setReadOnly:(BOOL)arg1 ;
@end

