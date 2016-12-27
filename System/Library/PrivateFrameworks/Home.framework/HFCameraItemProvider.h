/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSMutableSet;

@interface HFCameraItemProvider : HFItemProvider {

	/*^block*/id _filter;
	NSMutableSet* _cameraItems;

}

@property (nonatomic,retain) NSMutableSet * cameraItems;              //@synthesize cameraItems=_cameraItems - In the implementation block
@property (nonatomic,copy) id filter;                                 //@synthesize filter=_filter - In the implementation block
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(void)setCameraItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)cameraItems;
-(id)reloadItems;
-(id)invalidationReasons;
@end

