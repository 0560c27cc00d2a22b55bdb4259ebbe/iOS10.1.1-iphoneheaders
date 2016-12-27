/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface BookmarksTableViewCellLayoutManager : UITableViewCellLayoutManager {

	BOOL _usesVibrantAppearance;

}

@property (assign,nonatomic) BOOL usesVibrantAppearance;              //@synthesize usesVibrantAppearance=_usesVibrantAppearance - In the implementation block
+(id)sharedManager;
-(BOOL)usesVibrantAppearance;
-(void)setUsesVibrantAppearance:(BOOL)arg1 ;
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)textRectForCell:(id)arg1 ;
@end

