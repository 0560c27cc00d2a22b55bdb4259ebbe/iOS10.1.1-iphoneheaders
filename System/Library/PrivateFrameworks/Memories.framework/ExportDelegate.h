/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ExportDelegate <NSObject>
@optional
-(void)exportController:(id)arg1 progressedTo:(float)arg2 preventBackslide:(BOOL)arg3;
-(void)didFinishExport;
-(BOOL)didFinishTestModeExport;
-(void)exportControllerWillStartCopyToCameraRoll:(id)arg1;
-(void)autoExportAlertCompleted;

@end

