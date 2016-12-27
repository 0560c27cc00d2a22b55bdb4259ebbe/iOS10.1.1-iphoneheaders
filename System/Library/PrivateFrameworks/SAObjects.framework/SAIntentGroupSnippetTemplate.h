/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <libobjc.A.dylib/SiriUITemplateModel.h>
#import <libobjc.A.dylib/SiriUITemplateModelPrivate.h>

@class NSString, SAUISnippet, NSArray;

@interface SAIntentGroupSnippetTemplate : SADomainObject <SiriUITemplateModel, SiriUITemplateModelPrivate>

@property (nonatomic,readonly) id<SAServerBoundCommand> intents_serverBoundCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * modelIdentifier; 
@property (nonatomic,copy,readonly) NSString * detailIdentifier; 
@property (nonatomic,copy,readonly) NSString * commandIdentifier; 
@property (nonatomic,retain) SAUISnippet * detailSnippet; 
@property (nonatomic,copy) NSArray * intentSlotKeyPaths; 
@property (nonatomic,copy) NSString * key; 
+(id)snippetTemplate;
+(id)snippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAServerBoundCommand>)intents_serverBoundCommand;
-(NSString *)modelIdentifier;
-(Class)templateViewControllerClass;
-(NSString *)detailIdentifier;
-(NSString *)commandIdentifier;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUISnippet *)detailSnippet;
-(void)setDetailSnippet:(SAUISnippet *)arg1 ;
-(NSArray *)intentSlotKeyPaths;
-(void)setIntentSlotKeyPaths:(NSArray *)arg1 ;
@end

