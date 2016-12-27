/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLToolbarButtonItemRepresentation, UIAlertController, QLToolbarUnderlyingButton, NSString, UIImage, NSArray;

@interface QLToolbarButton : NSObject <NSSecureCoding> {

	QLToolbarButtonItemRepresentation* _currentItemRepresentation;
	UIAlertController* _alertController;
	id _target;
	QLToolbarUnderlyingButton* _underlyingButton;
	SEL _action;
	BOOL _forceToNavBar;
	BOOL _selected;
	NSString* _identifier;
	UIImage* _image;
	long long _systemItem;
	NSString* _title;
	NSString* _accessibilityIdentifier;
	NSArray* _options;
	unsigned long long _placement;

}

@property (readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (copy) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign) long long systemItem;                          //@synthesize systemItem=_systemItem - In the implementation block
@property (copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (copy) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (copy) NSArray * options;                               //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long placement;                  //@synthesize placement=_placement - In the implementation block
@property (assign) BOOL forceToNavBar;                            //@synthesize forceToNavBar=_forceToNavBar - In the implementation block
@property (assign) BOOL selected;                                 //@synthesize selected=_selected - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)accessibilityIdentifier;
-(long long)systemItem;
-(void)setSelected:(BOOL)arg1 ;
-(NSArray *)options;
-(void)setOptions:(NSArray *)arg1 ;
-(unsigned long long)placement;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)selected;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(void)setForceToNavBar:(BOOL)arg1 ;
-(void)invalidateCurrentState;
-(BOOL)forceToNavBar;
-(id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(CGSize)arg3 ;
-(void)setSystemItem:(long long)arg1 ;
@end

