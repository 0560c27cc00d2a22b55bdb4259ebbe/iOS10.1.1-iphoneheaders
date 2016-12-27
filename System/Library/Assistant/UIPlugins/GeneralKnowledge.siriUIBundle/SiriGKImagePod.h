/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKBasePod.h>

@class NSMutableArray;

@interface SiriGKImagePod : SiriGKBasePod {

	NSMutableArray* _viewArray;

}
-(id)initWithPod:(id)arg1 safariBackURL:(id)arg2 usingPersistentStore:(id)arg3 ;
-(double)minimumLineSpacing;
-(double)minimumInteritemSpacing;
-(UIEdgeInsets)edgeInsets;
-(id)footerView;
-(id)viewAtIndex:(long long)arg1 ;
-(long long)viewCount;
-(long long)keylineType;
@end

