/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>

@protocol CNContactViewControllerDelegate, CNContactContentViewController;
@class CNContact, NSArray, CNContactStore, CNGroup, CNContainer, NSString, CNContactContentViewController, _UIAccessDeniedView, UIViewController, CNPolicy, CNContactFormatter, UIView;

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol> {

	void* _addressBook;
	long long _mode;
	BOOL _ignoreViewWillBePresented;
	BOOL _allowsEditing;
	BOOL _shouldShowLinkedContacts;
	BOOL _highlightedPropertyImportant;
	BOOL _requiresSetup;
	BOOL _showingMeContact;
	CNContact* _contact;
	NSArray* _displayedPropertyKeys;
	id<CNContactViewControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	CNGroup* _parentGroup;
	CNContainer* _parentContainer;
	NSString* _alternateName;
	NSString* _message;
	CNContact* _contentContact;
	CNContactContentViewController* _contentViewController;
	_UIAccessDeniedView* _accessDeniedView;
	NSString* _highlightedPropertyKey;
	NSString* _highlightedPropertyIdentifier;
	NSArray* _extraBarButtonItems;
	UIViewController*<CNContactContentViewController> _viewController;
	CNPolicy* _policy;
	CNContact* _additionalContact;
	long long _displayMode;
	long long _editMode;
	long long _actions;
	CNContactFormatter* _contactFormatter;
	NSString* _primaryPropertyKey;
	UIView* _contactHeaderView;
	UIViewController* _contactHeaderViewController;

}

@property (nonatomic,retain) CNContact * contentContact;                                                    //@synthesize contentContact=_contentContact - In the implementation block
@property (nonatomic,retain) CNContactContentViewController * contentViewController;                        //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;                                      //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (nonatomic,retain) NSString * highlightedPropertyKey;                                             //@synthesize highlightedPropertyKey=_highlightedPropertyKey - In the implementation block
@property (nonatomic,retain) NSString * highlightedPropertyIdentifier;                                      //@synthesize highlightedPropertyIdentifier=_highlightedPropertyIdentifier - In the implementation block
@property (assign,nonatomic) BOOL highlightedPropertyImportant;                                             //@synthesize highlightedPropertyImportant=_highlightedPropertyImportant - In the implementation block
@property (nonatomic,retain) NSArray * extraBarButtonItems;                                                 //@synthesize extraBarButtonItems=_extraBarButtonItems - In the implementation block
@property (assign,nonatomic) BOOL requiresSetup;                                                            //@synthesize requiresSetup=_requiresSetup - In the implementation block
@property (nonatomic,retain) UIViewController*<CNContactContentViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) long long mode;                                                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CNPolicy * policy;                                                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) CNContact * additionalContact;                                                 //@synthesize additionalContact=_additionalContact - In the implementation block
@property (assign,nonatomic) BOOL showingMeContact;                                                         //@synthesize showingMeContact=_showingMeContact - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                           //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                         //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) long long editMode;                                                            //@synthesize editMode=_editMode - In the implementation block
@property (assign,nonatomic) long long actions;                                                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                         //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,readonly) id<CNContactViewControllerPrivateDelegate> privateDelegate; 
@property (nonatomic,retain) NSString * primaryPropertyKey;                                                 //@synthesize primaryPropertyKey=_primaryPropertyKey - In the implementation block
@property (nonatomic,retain) UIView * contactHeaderView;                                                    //@synthesize contactHeaderView=_contactHeaderView - In the implementation block
@property (nonatomic,retain) UIViewController * contactHeaderViewController;                                //@synthesize contactHeaderViewController=_contactHeaderViewController - In the implementation block
@property (nonatomic,copy) NSArray * displayedPropertyKeys;                                                 //@synthesize displayedPropertyKeys=_displayedPropertyKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNGroup * parentGroup;                                                         //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,retain) CNContainer * parentContainer;                                                 //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,copy) NSString * alternateName;                                                        //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,copy) NSString * message;                                                              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                            //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsActions; 
@property (assign,nonatomic) BOOL shouldShowLinkedContacts;                                                 //@synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForUpdatingContact:(id)arg1 withPropertiesFromContact:(id)arg2 ;
+(id)viewControllerForNewContact:(id)arg1 ;
+(id)viewControllerForUnknownContact:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(id)viewControllerForContact:(id)arg1 ;
-(void)setActions:(long long)arg1 ;
-(void)setDelegate:(id<CNContactViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CNContactViewControllerDelegate>)delegate;
-(long long)actions;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setViewController:(UIViewController*<CNContactContentViewController>)arg1 ;
-(UIViewController*<CNContactContentViewController>)viewController;
-(CNContactContentViewController *)contentViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)_isDelayingPresentation;
-(void)_endDelayingPresentation;
-(long long)mode;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setContentViewController:(CNContactContentViewController *)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(long long)displayMode;
-(id)initWithMode:(long long)arg1 ;
-(id<CNContactViewControllerPrivateDelegate>)privateDelegate;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)didChangePreferredContentSize:(CGSize)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(NSString *)alternateName;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setAlternateName:(NSString *)arg1 ;
-(CNContactStore *)contactStore;
-(CNPolicy *)policy;
-(void)_prepareViewController;
-(void)_viewWillBePresented;
-(void)_setupViewController;
-(BOOL)_shouldBeOutOfProcess;
-(NSArray *)displayedPropertyKeys;
-(BOOL)highlightedPropertyImportant;
-(UIView *)contactHeaderView;
-(id)navigationItemController;
-(void)editCancel:(id)arg1 ;
-(void)toggleEditing:(id)arg1 ;
-(NSArray *)extraBarButtonItems;
-(void)setExtraBarButtonItems:(NSArray *)arg1 ;
-(CNGroup *)parentGroup;
-(CNContainer *)parentContainer;
-(void)setShowingMeContact:(BOOL)arg1 ;
-(void)setHighlightedPropertyImportant:(BOOL)arg1 ;
-(void)setParentGroup:(CNGroup *)arg1 ;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(BOOL)allowsActions;
-(BOOL)showingMeContact;
-(BOOL)shouldShowLinkedContacts;
-(void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3 ;
-(void)configureNavigationItem:(id)arg1 ;
-(void)setAdditionalContact:(CNContact *)arg1 ;
-(NSString *)primaryPropertyKey;
-(void)setHighlightedPropertyKey:(NSString *)arg1 ;
-(void)setHighlightedPropertyIdentifier:(NSString *)arg1 ;
-(void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(BOOL)arg3 ;
-(BOOL)requiresSetup;
-(void)setRequiresSetup:(BOOL)arg1 ;
-(void)setContentContact:(CNContact *)arg1 ;
-(CNContact *)additionalContact;
-(UIViewController *)contactHeaderViewController;
-(NSString *)highlightedPropertyIdentifier;
-(CNContact *)contentContact;
-(NSString *)highlightedPropertyKey;
-(id)_primaryPropertyStringForContact:(id)arg1 ;
-(id)_contactPresentedViewController;
-(void)enableSaveKeyboardShortcut;
-(void)enableCancelKeyboardShortcut;
-(void)setDoneButtonText:(id)arg1 enabled:(BOOL)arg2 ;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)setPrimaryPropertyKey:(NSString *)arg1 ;
-(void)setContactHeaderView:(UIView *)arg1 ;
-(void)setContactHeaderViewController:(UIViewController *)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(CNContact *)contact;
-(void)setDisplayedPropertyKeys:(NSArray *)arg1 ;
-(void)_setViewController:(id)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(void)setShouldShowLinkedContacts:(BOOL)arg1 ;
-(void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 ;
-(void)setContact:(CNContact *)arg1 ;
-(long long)editMode;
-(void)setEditMode:(long long)arg1 ;
@end

