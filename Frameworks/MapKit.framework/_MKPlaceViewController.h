/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMapTable, MKPlaceInfoViewController, MKMapItem, MKPlaceNearbyAppsMetricsCoordinator, UITapGestureRecognizer, <_MKPlaceViewControllerDelegate>, NSString, CNContact, MKPlaceActionsViewController, MKPlaceHeaderView, ABPeoplePickerNavigationController, NSArray, MKSegmentedControlTabBarView, SKProductPageViewController, MKDistanceDetailProvider;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, SKProductPageViewControllerDelegate, MKPlaceNearbyAppsViewControllerDelegate, MKPlaceSharedAttributionDelegate, MKPlaceHeaderViewDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceActionsViewControllerDelegate> {
    MKPlaceInfoViewController *_infoViewController;
    MKPlaceActionsViewController *_actionsViewController;
    UITapGestureRecognizer *_flyoverTourTapRecognizer;
    bool_isSearchingForNearbyApps;
    SKProductPageViewController *_storePageViewController;
    NSArray *_storeItems;
    void *_addressBook;
    void *_originalContactRecordCopy;
    NSMapTable *_additionalViewControllers;
    bool_overrideDefaultShowRAP;
    bool_hasCheckedDistanceAvailability;
    bool_showEditButton;
    bool_hideInlineMap;
    bool_showInlineMapInHeader;
    bool_hideDirectionsButtons;
    bool_showContactActions;
    bool_showTitleBar;
    bool_showShareActionsButton;
    bool_showRemovePin;
    bool_showReportAProblem;
    bool_disableReportAProblem;
    bool_showRerouting;
    bool_showNearbyApps;
    bool_showFlyoverTour;
    bool_showCreateReminder;
    bool_showOpenInSkyline;
    bool_showSimulateLocation;
    NSString *_headerTitle;
    MKPlaceHeaderView *_placeHeaderView;
    MKSegmentedControlTabBarView *_tabBar;
    MKDistanceDetailProvider *_distanceMonitor;
    MKMapItem *_mapItem;
    CNContact *_contact;
    CNContact *_originalContact;
    <_MKPlaceViewControllerDelegate> *_placeViewControllerDelegate;
    double _headerHeight;
    MKPlaceNearbyAppsMetricsCoordinator *_metricsCoordinator;
    ABPeoplePickerNavigationController *_contactsNavigationController;
}

@property bool showShareActionsButton;
@property(retain) MKMapItem * mapItem;
@property(copy) NSString * headerTitle;
@property bool showEditButton;
@property bool showTitleBar;
@property bool hideDirectionsButtons;
@property bool hideInlineMap;
@property bool showInlineMapInHeader;
@property bool showNearbyApps;
@property bool showRemovePin;
@property bool showReportAProblem;
@property bool disableReportAProblem;
@property bool showRerouting;
@property bool showFlyoverTour;
@property bool showContactActions;
@property double headerHeight;
@property bool showCreateReminder;
@property bool showSimulateLocation;
@property bool showOpenInSkyline;
@property <_MKPlaceViewControllerDelegate> * placeViewControllerDelegate;
@property(readonly) CNContact * contact;
@property ABPeoplePickerNavigationController * contactsNavigationController;
@property(retain) MKPlaceHeaderView * placeHeaderView;
@property(retain) MKSegmentedControlTabBarView * tabBar;
@property(retain) CNContact * originalContact;
@property(retain) MKDistanceDetailProvider * distanceMonitor;
@property bool hasCheckedDistanceAvailability;
@property(readonly) MKPlaceNearbyAppsMetricsCoordinator * metricsCoordinator;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setShowFlyoverTour:(bool)arg1;
- (void)setShowNearbyApps:(bool)arg1;
- (void)setShowRerouting:(bool)arg1;
- (void)setDisableReportAProblem:(bool)arg1;
- (bool)disableReportAProblem;
- (void)setShowTitleBar:(bool)arg1;
- (bool)showTitleBar;
- (void)setHideDirectionsButtons:(bool)arg1;
- (void)setShowInlineMapInHeader:(bool)arg1;
- (void)setHideInlineMap:(bool)arg1;
- (void)setPlaceViewControllerDelegate:(id)arg1;
- (void)setHasCheckedDistanceAvailability:(bool)arg1;
- (bool)hasCheckedDistanceAvailability;
- (void)setDistanceMonitor:(id)arg1;
- (id)distanceMonitor;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (void)_switchToTabAtIndex:(long long)arg1;
- (void)removeAdditionalViewController:(id)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;
- (long long)_sectionPositionForMapTableKey:(id)arg1;
- (void)actionsViewControllerOpenInSkyline:(id)arg1;
- (void)actionsViewControllerSimulateLocation:(id)arg1;
- (void)actionsViewControllerCreateReminder:(id)arg1;
- (void)actionsViewControllerShare:(id)arg1;
- (void)actionsViewControllerReportAProblem:(id)arg1;
- (void)actionsViewControllerRemovePin:(id)arg1;
- (void)actionsViewControllerAddContactToExistingContact:(id)arg1;
- (void)actionsViewControllerCreateNewContact:(id)arg1;
- (void)infoViewController:(id)arg1 didSelectDeal:(id)arg2;
- (bool)shouldShowFlyoverTourForInfoViewController:(id)arg1;
- (bool)shouldShowReroutingForInfoViewController:(id)arg1;
- (bool)shouldShowDirectionsForInfoViewController:(id)arg1;
- (bool)shouldShowInlineMapForInfoViewController:(id)arg1;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithID:(id)arg2;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1;
- (void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (bool)headerViewshouldShowTitleSubtitleAndStarRatings:(id)arg1;
- (void)headerView:(id)arg1 didFinishLoadingBackgroundViewOfType:(long long)arg2;
- (void)openInfoAttribution;
- (void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (void)stackingViewControllerDidEndScroll:(id)arg1;
- (void)stackingViewControllerWillBeginScroll:(id)arg1;
- (void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2;
- (bool)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2;
- (double)stackingViewControllerHeightForHeaderView:(id)arg1;
- (void)_displayAppWithMetadata:(id)arg1;
- (void)_openAppWithBundleID:(id)arg1;
- (id)metricsCoordinator;
- (void)_findNearbyAppsAtCoordinate:(struct { double x1; double x2; })arg1;
- (void)_searchForNearbyApps;
- (bool)showNearbyApps;
- (id)contactsNavigationController;
- (bool)_removeMapsDataFromContactWithRecordID:(int)arg1;
- (void)setShowOpenInSkyline:(bool)arg1;
- (bool)showOpenInSkyline;
- (void)setShowSimulateLocation:(bool)arg1;
- (bool)showSimulateLocation;
- (void)setShowCreateReminder:(bool)arg1;
- (bool)showCreateReminder;
- (void)setShowReportAProblem:(bool)arg1;
- (bool)showReportAProblem;
- (void)setShowRemovePin:(bool)arg1;
- (bool)showRemovePin;
- (bool)showContactActions;
- (bool)showRerouting;
- (bool)showFlyoverTour;
- (bool)hideDirectionsButtons;
- (id)originalContact;
- (void)_openInfoAttribution;
- (void)_tappedForFlyoverTour;
- (void)setPlaceHeaderView:(id)arg1;
- (id)_mapTableKeyForSectionPosition:(long long)arg1;
- (void)_updateViewControllers;
- (void)setOriginalContact:(id)arg1;
- (void)_setViewControllersWithInformationViewControllers:(id)arg1;
- (void)updateActionVisibility;
- (void)setShowContactActions:(bool)arg1;
- (bool)hideInlineMap;
- (id)additionalViewControllersAtPosition:(long long)arg1;
- (bool)_defaultShowReportAProblem;
- (id)placeViewControllerDelegate;
- (void)resetHeaderView;
- (id)placeHeaderView;
- (void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 numberOfReviews:(unsigned long long)arg2;
- (void)presentHeaderView;
- (bool)showInlineMapInHeader;
- (void)resetHeaderViewAnimations;
- (void)restartHeaderViewAnimations;
- (void)_searchForNearbyAppsIfNecessary;
- (void)_showShareSheet:(id)arg1;
- (bool)showShareActionsButton;
- (void)_showEditSheet:(id)arg1;
- (bool)showEditButton;
- (void)_setupHeaderView;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(bool)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (void)setContactsNavigationController:(id)arg1;
- (void)setShowShareActionsButton:(bool)arg1;
- (void)setShowEditButton:(bool)arg1;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)setContact:(id)arg1;
- (id)contact;
- (id)initWithMapItem:(id)arg1;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)_commonInit;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (id)headerTitle;
- (void)setHeaderHeight:(double)arg1;
- (double)headerHeight;
- (void)setTabBar:(id)arg1;
- (id)tabBar;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (long long)preferredStatusBarStyle;

@end
