/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FuseUI/FuseUI-Structs.h>
@interface MusicStoreBrowseSectionUniformContentItemTypeResolver : NSObject {

	BOOL _hasValidUniformContentItemType;
	map<MusicStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MusicStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MusicStoreBrowseDetailedContentItemType, unsigned long> > >* _contentItemTypeOccurrences;
	unsigned long long _totalNumberOfOccurrences;
	long long _uniformContentItemType;

}
-(long long)uniformContentItemType;
-(void)addContentItemType:(long long)arg1 ;
@end

