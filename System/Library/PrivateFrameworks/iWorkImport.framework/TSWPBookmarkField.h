/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPSmartField.h>

@class NSString;

@interface TSWPBookmarkField : TSWPSmartField {

	NSString* _name;
	BOOL _forRange;
	BOOL _hidden;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL forRange;                //@synthesize forRange=_forRange - In the implementation block
@property (assign,nonatomic) BOOL hidden;                  //@synthesize hidden=_hidden - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(BookmarkFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const BookmarkFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(int)smartFieldKind;
-(int)styleAttributeArrayKind;
-(int)attributeArrayKind;
-(BOOL)forRange;
-(void)setForRange:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithContext:(id)arg1 ;
-(BOOL)allowsEditing;
-(BOOL)hidden;
@end
