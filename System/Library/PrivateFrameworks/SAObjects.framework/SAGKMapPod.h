/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKPodView.h>

@class SALocation, SAUIAppPunchOut, NSNumber;

@interface SAGKMapPod : SAGKPodView

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * showButton; 
@property (nonatomic,copy) NSNumber * zoomLevel; 
+(id)mapPod;
+(id)mapPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setZoomLevel:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSNumber *)showButton;
-(void)setShowButton:(NSNumber *)arg1 ;
-(NSNumber *)zoomLevel;
@end

