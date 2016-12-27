/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@class NSArray, NSString;

@interface MKSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {

	unsigned long long _clientType;
	NSArray* _sections;

}

@property (assign,nonatomic) unsigned long long clientType;              //@synthesize clientType=_clientType - In the implementation block
@property (nonatomic,copy) NSArray * sections;                           //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(id)initWithClientType:(unsigned long long)arg1 ;
-(unsigned long long)clientType;
-(void)setClientType:(unsigned long long)arg1 ;
@end

