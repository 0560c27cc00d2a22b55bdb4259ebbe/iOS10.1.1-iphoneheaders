/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/RequestDisplayListDelegate.h>
#import <PDFKit/PDFTileDelegate.h>

@class PDFPageLayerPrivate, NSString;

@interface PDFPageLayer : CALayer <RequestDisplayListDelegate, PDFTileDelegate> {

	PDFPageLayerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPage:(id)arg1 ;
-(void)recievedDisplayList:(CGDisplayListRef)arg1 ;
-(void)tileDrawingComplete:(id)arg1 ;
-(void)setNeedsTilesUpdate;
-(void)updateTiles;
-(void)releaseTiles;
-(void)_updateTilesIOS;
-(BOOL)_tileIsOccluded:(id)arg1 ;
-(CGRect)pageLayerVisibleRect;
-(void)setParentView:(id)arg1 ;
-(void)setDisplayBox:(long long)arg1 ;
-(void)setShouldAntiAlias:(BOOL)arg1 ;
-(void)releaseDisplayList;
-(void)magnificationWillChange;
-(void)magnificationDidChange;
-(void)appendDebugDotFile:(id)arg1 ;
-(void)setEnablePageShadows:(BOOL)arg1 ;
-(void)hideTileLayer:(BOOL)arg1 ;
-(double)lastLayoutDuration;
-(BOOL)isPageVisible;
@end
