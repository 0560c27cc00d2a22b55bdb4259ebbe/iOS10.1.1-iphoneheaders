/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue, ICSAlternateTimeProposal;

@interface ICSUserAddress : ICSProperty

@property (assign,nonatomic) BOOL rsvp; 
@property (nonatomic,retain) NSString * cn; 
@property (assign,nonatomic) int cutype; 
@property (nonatomic,retain) NSString * dir; 
@property (assign,nonatomic) int partstat; 
@property (assign,nonatomic) int schedulestatus; 
@property (assign,nonatomic) int scheduleagent; 
@property (assign,nonatomic) int scheduleforcesend; 
@property (assign,nonatomic) int role; 
@property (nonatomic,retain) ICSDateValue * partstatModified; 
@property (assign,nonatomic) ICSAlternateTimeProposal * alternateTimeProposal; 
@property (assign,nonatomic) BOOL x_apple_self_invited; 
@property (nonatomic,retain) NSString * email; 
@property (nonatomic,retain) NSString * likenessDataString; 
@property (nonatomic,retain) NSString * x_apple_inviterName; 
+(int)roleFromICSString:(id)arg1 ;
+(int)calendarUserFromICSString:(id)arg1 ;
+(int)participationStatusFromICSString:(id)arg1 ;
+(int)scheduleStatusFromICSString:(id)arg1 ;
+(int)scheduleAgentFromICSString:(id)arg1 ;
+(int)scheduleForceSendFromICSString:(id)arg1 ;
+(id)URLForNoMail;
+(id)ICSStringFromCalendarUser:(int)arg1 ;
+(id)ICSStringFromParticipationStatus:(int)arg1 ;
+(id)ICSStringFromScheduleAgent:(int)arg1 ;
+(id)ICSStringFromScheduleStatus:(int)arg1 ;
+(id)ICSStringFromScheduleForceSend:(int)arg1 ;
+(id)ICSStringFromRole:(int)arg1 ;
-(void)setDir:(NSString *)arg1 ;
-(NSString *)dir;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)displayName;
-(id)propertiesToObscure;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)fixAddress;
-(BOOL)isEmailAddress;
-(BOOL)isHTTPAddress;
-(BOOL)isHTTPSAddress;
-(void)setSchedulestatus:(int)arg1 ;
-(int)schedulestatus;
-(void)setScheduleforcesend:(int)arg1 ;
-(int)scheduleforcesend;
-(void)setX_apple_self_invited:(BOOL)arg1 ;
-(BOOL)x_apple_self_invited;
-(void)setLikenessDataString:(NSString *)arg1 ;
-(NSString *)likenessDataString;
-(void)setX_apple_inviterName:(NSString *)arg1 ;
-(NSString *)x_apple_inviterName;
-(void)setX_calendarserver_email:(id)arg1 ;
-(id)x_calendarserver_email;
-(NSString *)cn;
-(int)cutype;
-(int)scheduleagent;
-(ICSDateValue *)partstatModified;
-(ICSAlternateTimeProposal *)alternateTimeProposal;
-(void)setPartstatModified:(ICSDateValue *)arg1 ;
-(void)setAlternateTimeProposal:(ICSAlternateTimeProposal *)arg1 ;
-(void)setCn:(NSString *)arg1 ;
-(void)setCutype:(int)arg1 ;
-(void)setPartstat:(int)arg1 ;
-(id)emailAddress;
-(int)partstat;
-(BOOL)rsvp;
-(void)setScheduleagent:(int)arg1 ;
-(NSString *)email;
-(id)initWithEmailAddress:(id)arg1 ;
-(BOOL)hasEmailAddress;
-(void)setRsvp:(BOOL)arg1 ;
-(void)setRole:(int)arg1 ;
-(int)role;
-(void)setEmail:(NSString *)arg1 ;
@end

