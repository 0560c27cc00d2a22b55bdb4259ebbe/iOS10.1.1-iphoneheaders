/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/DDParsecCollectionDelegate.h>

@class DDParsecCollectionViewController;

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {

	DDParsecCollectionViewController* _parsecViewController;
	BOOL _previewMode;

}
-(int)interactionType;
-(id)localizedName;
-(id)createViewController;
-(void)dismissParsecCollection:(id)arg1 ;
@end

