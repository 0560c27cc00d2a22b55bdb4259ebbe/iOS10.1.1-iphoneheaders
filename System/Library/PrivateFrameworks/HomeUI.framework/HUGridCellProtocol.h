/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HUGridCellLayoutOptions;


@protocol HUGridCellProtocol <NSObject,HUCellProtocol>
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden; 
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions; 
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@optional
-(BOOL)isRearranging;
-(void)setRearranging:(BOOL)arg1;

@required
+(Class)layoutOptionsClass;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1;
-(HUGridCellLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(id)arg1;

@end

