/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject {

	NSMutableArray* _assets;

}

@property (nonatomic,retain) NSMutableArray * assets;              //@synthesize assets=_assets - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(id)init;
-(void)addAsset:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assets;
@end

