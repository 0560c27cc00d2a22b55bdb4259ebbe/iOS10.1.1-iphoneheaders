/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAAppInfo, NSURL, NSArray, NSString, NSDate, NSNumber, SAPersonAttribute;

@interface SASmsSms : SADomainObject

@property (nonatomic,retain) SAAppInfo * appInfo; 
@property (nonatomic,copy) NSURL * attachment; 
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSString * chatIdentifier; 
@property (nonatomic,copy) NSDate * dateLastMessageReadInThread; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) NSString * effect; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * groupNameId; 
@property (assign,nonatomic) BOOL hasGroupName; 
@property (nonatomic,copy) NSNumber * isAudioMessage; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSArray * msgRecipients; 
@property (nonatomic,retain) SAPersonAttribute * msgSender; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * sender; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timezoneId; 
+(id)smsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)sms;
-(id)af_messageValue;
-(NSString *)sender;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setEffect:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)effect;
-(void)setSender:(NSString *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setAttachment:(NSURL *)arg1 ;
-(NSURL *)attachment;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAppInfo:(SAAppInfo *)arg1 ;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(NSDate *)dateLastMessageReadInThread;
-(void)setDateLastMessageReadInThread:(NSDate *)arg1 ;
-(NSString *)groupNameId;
-(void)setGroupNameId:(NSString *)arg1 ;
-(BOOL)hasGroupName;
-(void)setHasGroupName:(BOOL)arg1 ;
-(NSArray *)msgRecipients;
-(SAPersonAttribute *)msgSender;
-(NSString *)timezoneId;
-(void)setTimezoneId:(NSString *)arg1 ;
-(NSDate *)dateSent;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setMsgSender:(SAPersonAttribute *)arg1 ;
-(void)setMsgRecipients:(NSArray *)arg1 ;
-(NSNumber *)isAudioMessage;
-(NSString *)chatIdentifier;
-(NSNumber *)outgoing;
-(void)setIsAudioMessage:(NSNumber *)arg1 ;
-(SAAppInfo *)appInfo;
@end
