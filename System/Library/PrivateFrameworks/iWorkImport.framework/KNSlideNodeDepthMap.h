/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface KNSlideNodeDepthMap : NSObject {

	NSArray* _slideNodes;
	NSArray* _depthsOfSlideNodes;

}

@property (nonatomic,readonly) NSArray * slideNodes;                      //@synthesize slideNodes=_slideNodes - In the implementation block
@property (nonatomic,readonly) NSArray * depthsOfSlideNodes;              //@synthesize depthsOfSlideNodes=_depthsOfSlideNodes - In the implementation block
-(NSArray *)slideNodes;
-(id)initWithSlideNodes:(id)arg1 depths:(id)arg2 ;
-(void)enumerateSlideNodesAndDepthsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)depthsOfSlideNodes;
-(void)dealloc;
@end

