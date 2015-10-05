/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
  CKEDITOR.addStylesSet( 'drupal',
  [
    {
      name: 'Square Container', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'color-container'
      }
    }, 
    {
      name: 'Square Container (Dark Blue)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'color-container dark-blue'
      }
    }, 
    {
      name: 'Square Container (Blue)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'color-container blue'
      }
    }, 
    {
      name: 'Square Container (Orange)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'color-container orange'
      }
    }, 
    {
      name: 'Square Container (Dark Orange)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'color-container dark-orange'
      }
    }, 
    {
      name: 'Square Container (Green)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'color-container green'
      }
    }, 
    
    {
      name: 'Featured Container', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'featured-container'
      }
    }, 
    {
      name: 'Featured Container (Dark Blue)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'featured-container dark-blue'
      }
    }, 
    {
      name: 'Featured Container (Blue)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'featured-container blue'
      }
    }, 
    {
      name: 'Featured Container (Orange)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'featured-container orange'
      }
    }, 
    {
      name: 'Featured Container (Dark Orange)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'featured-container dark-orange'
      }
    }, 
    {
      name: 'Featured Container (Green)', //THESE NEXT 4 LINES I CHANGED 
      element: 'div',
      attributes: {
        class: 'featured-container green'
      }
    }
  ]);
}