/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSSAMLResponse.h>
@class NSString, NSArray;


@protocol VSJSSAMLResponse <JSExport>
@property (nonatomic,copy) NSString * authN; 
@property (nonatomic,copy) NSString * userMetadata; 
@property (nonatomic,copy) NSString * logout; 
@property (nonatomic,copy) NSArray * userChannelList; 
@required
-(id)init;
-(NSString *)logout;
-(NSString *)authN;
-(void)setAuthN:(id)arg1;
-(NSString *)userMetadata;
-(void)setUserMetadata:(id)arg1;
-(void)setLogout:(id)arg1;
-(NSArray *)userChannelList;
-(void)setUserChannelList:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface VSJSSAMLResponse : IKJSObject <VSJSSAMLResponse, NSCopying> {

	NSString* _authN;
	NSString* _userMetadata;
	NSString* _logout;
	NSArray* _userChannelList;

}

@property (nonatomic,copy) NSString * authN;                       //@synthesize authN=_authN - In the implementation block
@property (nonatomic,copy) NSString * userMetadata;                //@synthesize userMetadata=_userMetadata - In the implementation block
@property (nonatomic,copy) NSString * logout;                      //@synthesize logout=_logout - In the implementation block
@property (nonatomic,copy) NSArray * userChannelList;              //@synthesize userChannelList=_userChannelList - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)logout;
-(NSString *)authN;
-(void)setAuthN:(NSString *)arg1 ;
-(NSString *)userMetadata;
-(void)setUserMetadata:(NSString *)arg1 ;
-(void)setLogout:(NSString *)arg1 ;
-(NSArray *)userChannelList;
-(void)setUserChannelList:(NSArray *)arg1 ;
@end

