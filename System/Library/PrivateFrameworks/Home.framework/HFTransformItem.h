/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HFItem;

@interface HFTransformItem : HFItem {

	HFItem* _sourceItem;
	/*^block*/id _transformationBlock;

}

@property (nonatomic,retain) HFItem * sourceItem;               //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,copy) id transformationBlock;              //@synthesize transformationBlock=_transformationBlock - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)transformationBlock;
-(void)setTransformationBlock:(id)arg1 ;
-(id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2 ;
-(void)setSourceItem:(HFItem *)arg1 ;
-(HFItem *)sourceItem;
-(id)initWithSourceItem:(id)arg1 transformationBlock:(/*^block*/id)arg2 ;
@end

