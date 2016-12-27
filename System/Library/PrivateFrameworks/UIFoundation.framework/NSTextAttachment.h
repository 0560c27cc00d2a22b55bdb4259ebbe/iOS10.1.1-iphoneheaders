/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextAttachmentContainer.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString, NSFileWrapper, UIImage, UITextAttachmentView, UIView;

@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSCoding> {

	NSData* _data;
	NSString* _uti;
	NSString* _cacheKey;
	CGRect _bounds;
	NSFileWrapper* _fileWrapper;
	UIImage* _image;
	UITextAttachmentView* _wrapperView;

}

@property (retain) UIView * contentView; 
@property (nonatomic,copy) NSData * contents; 
@property (nonatomic,copy) NSString * fileType; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGRect bounds; 
@property (nonatomic,retain) NSFileWrapper * fileWrapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)imageCache;
-(id)initWithFileWrapper:(id)arg1 ;
-(id)_cacheKey;
-(void)_invalidateWrapperView;
-(void)setDrawingBounds:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(id)init;
-(CGRect)bounds;
-(UIView *)contentView;
-(void)setImage:(UIImage *)arg1 ;
-(id)_image;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(UIImage *)image;
-(NSData *)contents;
-(void)setContents:(NSData *)arg1 ;
-(NSFileWrapper *)fileWrapper;
-(NSString *)fileType;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)attachmentCell;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)drawingBounds;
-(void)setFileWrapper:(NSFileWrapper *)arg1 ;
@end

