/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SASetSingleClientState.h>

@class SALocalSearchGeoClientState, NSString;

@interface SALocalSearchSetGeoClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (nonatomic,retain) SALocalSearchGeoClientState * clientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setGeoClientState;
+(id)setGeoClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SALocalSearchGeoClientState *)clientState;
-(void)setClientState:(SALocalSearchGeoClientState *)arg1 ;
@end

