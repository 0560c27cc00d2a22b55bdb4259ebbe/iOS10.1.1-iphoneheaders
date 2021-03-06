/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INControlHomeIntentExport.h>

@class NSArray, INHomeAttribute, NSString;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (nonatomic,copy,readonly) NSArray * entities; 
@property (nonatomic,copy,readonly) INHomeAttribute * attribute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEntities:(NSArray *)arg1 ;
-(void)setAttribute:(INHomeAttribute *)arg1 ;
-(NSArray *)entities;
-(id)_metadata;
-(INHomeAttribute *)attribute;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(id)initWithEntities:(id)arg1 attribute:(id)arg2 ;
@end

