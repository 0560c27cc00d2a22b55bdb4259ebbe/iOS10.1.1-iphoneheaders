/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSNumber * pixelRatio; 
@property (nonatomic,retain) NSNumber * screenHeight; 
@property (nonatomic,retain) NSNumber * screenWidth; 
@property (nonatomic,retain) NSNumber * windowHeight; 
@property (nonatomic,retain) NSString * windowOrientation; 
@property (nonatomic,retain) NSNumber * windowWidth; 
@property (nonatomic,retain) NSString * pageContext; 
@property (nonatomic,retain) NSString * pageDescription; 
@property (assign,nonatomic) unsigned long long pageID; 
@property (nonatomic,retain) NSString * pageType; 
@property (nonatomic,retain) NSString * pageURL; 
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(NSString *)pageDescription;
-(NSNumber *)pixelRatio;
-(void)setPixelRatio:(NSNumber *)arg1 ;
-(void)setScreenHeight:(NSNumber *)arg1 ;
-(void)setScreenWidth:(NSNumber *)arg1 ;
-(void)setWindowHeight:(NSNumber *)arg1 ;
-(void)setWindowWidth:(NSNumber *)arg1 ;
-(NSNumber *)windowHeight;
-(NSNumber *)windowWidth;
-(id)init;
-(id)description;
-(void)setPageURL:(NSString *)arg1 ;
-(NSString *)pageURL;
-(void)setPageID:(unsigned long long)arg1 ;
-(unsigned long long)pageID;
-(NSNumber *)screenHeight;
-(NSNumber *)screenWidth;
-(void)setPageType:(NSString *)arg1 ;
-(NSString *)pageType;
-(void)setWindowOrientation:(NSString *)arg1 ;
-(void)setPageContext:(NSString *)arg1 ;
-(void)setPageDescription:(NSString *)arg1 ;
-(NSString *)pageContext;
-(NSString *)windowOrientation;
@end

