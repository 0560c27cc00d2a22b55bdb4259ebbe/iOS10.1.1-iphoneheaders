/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject {

	CPPage* page;
	NSMutableArray* objectsOnPage;
	float mapTemp;

}
-(void)dealloc;
-(id)page;
-(id)initWithPage:(id)arg1 ;
-(void)findClickableObjects:(BOOL)arg1 ;
-(id)objectAtPoint:(CGPoint)arg1 ;
-(id)paragraph:(CGPoint)arg1 ;
-(id)column:(CGPoint)arg1 ;
-(id)findObjectIn:(id)arg1 at:(CGPoint)arg2 count:(int*)arg3 ;
-(id)textLine:(CGPoint)arg1 ;
-(id)paragraphNear:(CGPoint)arg1 ;
-(id)layoutArea:(CGPoint)arg1 ;
-(unsigned)columnsAt:(CGPoint)arg1 ;
-(long long)compareByReadingOrder:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(BOOL)hitTestGraphicObject:(id)arg1 point:(CGPoint)arg2 ;
-(BOOL)hitTestParagraph:(id)arg1 point:(CGPoint)arg2 ;
-(id)findBestMatch:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

