/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSUsageBundleCell.h>

@class MusicUsageItem, MPArtworkCatalog;

@interface MusicUsageItemCell : PSUsageBundleCell {

	MusicUsageItem* _usageItem;
	MPArtworkCatalog* _artworkCatalog;

}
-(void)layoutSubviews;
-(id)blankIcon;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

